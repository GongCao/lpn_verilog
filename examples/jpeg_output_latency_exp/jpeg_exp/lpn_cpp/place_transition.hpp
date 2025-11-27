

#ifndef __PLACE_TRANSITION__
#define __PLACE_TRANSITION__
#define N 40 
#define LARGE 1<<30
#include <string>
#include <map>
#include <deque>
#include <vector>
#include <iostream>

// #define TK_type map<string, int>
#define QT_type(T) deque<T>
// new == malloc
#define NEW_QT(T, x) QT_type(T)* x = new QT_type(T)
// #define NEW_TOKEN(x, y) token x = (token*)malloc(sizeof(token)); TK_type* y = new TK_type; x->dir = y
#define NEW_TOKEN(T, x) T* x = new T;
// #define NEW_TOKEN(x) token x; 

using namespace std;

// typedef map<string, int> bind;
// typedef map<string, int> token;

// typedef struct token
// {
//   map<string, int>* dir;
// }token;


typedef struct empty_token {} empty_token;

#define CREATE_TOKEN_TYPE(name, ...) \
struct name \
{ __VA_ARGS__ };


CREATE_TOKEN_TYPE(
mcu_token,
int delay=0;
)


class base_token {
public:
   
   ~base_token() {}
};

class base_place {
public:
    virtual int tokenLen() const {
      return 0;
    }
    virtual string getId() const {
      return "";
    }

    virtual void reset() {
      return;
    }
    virtual ~base_place() {}
};

template<typename Token_Type = empty_token>
struct place : public base_place
{
  string id;
  
  place(string asid) : id(asid) {}

  deque<Token_Type*> tokens;

  int tokenLen() const override {
    return tokens.size();
  }

  string getId() const override {
        return id;
  }

  void reset() override{
      tokens.clear();
  }

};

// template<>
// struct place<empty_token> : public base_place {
//     string id;
//     int tokens = 0;

//     place(string asid) : id(asid) {}

//     int tokenLen() const override {
//         return tokens;
//     }

//     string getId() const override {
//         return id;
//     }

//     void reset() override {
//         tokens = 0;
//     }
// };



// using PlaceVariant = variant<place<plaunch_token>, place<psReadCmd_token>, place<insn_token>, place<empty_token> >;

#define create_input_vector_list(type) vector<place<type>*> p_input_of_##type; 
#define create_input_w_vector_list(type) int(*pi_w_##type[N]) (); 
#define create_input_guard_vector_list(type) int(*pi_guard_##type[N]) ();
#define create_input_threshold_vector_list(type) int pi_w_threshold_##type[N];

#define create_output_vector_list(type) vector<place<type>*> p_output_of_##type; void (*po_w_##type[N]) (place<type>*);

#define ALL_TYPE_ONCE(macro_name) \
  macro_name(mcu_token); \
  macro_name(empty_token); 
  

typedef struct transition
{
  string id;
  int (*delay_f)();

  ALL_TYPE_ONCE(create_input_vector_list);
  ALL_TYPE_ONCE(create_input_w_vector_list);
  ALL_TYPE_ONCE(create_input_guard_vector_list);
  ALL_TYPE_ONCE(create_input_threshold_vector_list);
  ALL_TYPE_ONCE(create_output_vector_list);
  
  deque<int> consume_tokens;

  int delay_event=-1; //-1 if no event

  int pip=-1; 

  int count=0;
  int time=0;
}transition;

// // __attribute__((optimize("O3")))
// token* peek(place* self){
//   if(self->tokens->size() > 0)
//     return &(self->tokens->at(0));
//   return NULL;
// }

template<typename T>
__attribute__((optimize("O3"))) 
int check_token_requirement(place<T>* self, int num_of_tokens){
   if (num_of_tokens == -2)
     return self->tokens.size() == 0;
   return self->tokens.size() >= num_of_tokens;
}

// __attribute__((optimize("O3")))
template<typename T>
__attribute__((optimize("O3"))) 
void fire(place<T>* self, int num_of_tokens){
   for(int i=0; i<num_of_tokens; i++){
      self->tokens.pop_front();
   }
}

// __attribute__((optimize("O3")))

// ignore this 
template<typename T>
__attribute__((optimize("O3"))) 
void accept(place<T>* self, deque<T>* tokens){
   if(tokens == NULL) return;
   while(!tokens->empty()){
    self->tokens.push_back(tokens->front());
    tokens->pop_front();
    //free tokens
   }
}
__attribute__((optimize("O3"))) 
int able_to_fire_t(transition* self){
  // cout << "===========" << endl << self->id << endl;

  #define loop_over_input(type) \
  int input_size_##type = self->p_input_of_##type.size(); \
  for(int i = 0; i< input_size_##type; i++){ \
     place<type>* p = self->p_input_of_##type[i]; \
     int consume_num_tokens_threshold = 0; \
     int consume_num_tokens_real = self->pi_w_##type[i](); \
     if(self->pi_w_threshold_##type[i] == 0) \
        consume_num_tokens_threshold = consume_num_tokens_real; \
     else \
        consume_num_tokens_threshold = self->pi_w_threshold_##type[i]; \
     self->consume_tokens.push_back(consume_num_tokens_real); \
     if (! check_token_requirement(p, consume_num_tokens_threshold) ){ \
        self->consume_tokens.clear();\
        return 0; \
     } \
     if (self->pi_guard_##type != NULL){ \
       if (self->pi_guard_##type[i] == NULL) continue; \
       int grant = self->pi_guard_##type[i](); \
       if (grant == 0) { \
         self->consume_tokens.clear();\
         return 0; \
       } \
     }  \
  }

  ALL_TYPE_ONCE(loop_over_input);
  #undef loop_over_input
  return 1;
} 

// __attribute__((optimize("O3")))
__attribute__((optimize("O3"))) 
void fire_t(transition* self){

   #define loop_over_input(type) \
   int input_size_##type = self->p_input_of_##type.size(); \
   for(int i=0; i < input_size_##type; i++){ \
     place<type>* p = self->p_input_of_##type[i]; \
     int consume_num_tokens = self->consume_tokens.front();\
     self->consume_tokens.pop_front(); \
     fire(p, consume_num_tokens); \
   }

  ALL_TYPE_ONCE(loop_over_input);
  #undef loop_over_input
  self->consume_tokens.clear();

}

// __attribute__((optimize("O3")))
__attribute__((optimize("O3"))) 
void accept_t(transition* self){
  // cout << "transition: " << self->id << endl;
  #define loop_over_output(type) \
  int output_size_##type = self->p_output_of_##type.size(); \
  for(int i=0; i < output_size_##type; i++){ \
     place<type>* p = self->p_output_of_##type[i]; \
     self->po_w_##type[i](p); \
  }

  ALL_TYPE_ONCE(loop_over_output);
  #undef loop_over_output
}

__attribute__((optimize("O3"))) 
int delay(transition* self){
  return self->delay_f();
}

__attribute__((optimize("O3")))
void trigger(transition* self){

  if(self->delay_event != -1) return;
  
  int can_fire = able_to_fire_t(self);
  
  if(self->delay_event == -1 && can_fire){
     int delay_time = delay(self);
     int mature_time = self->time + delay_time; 
    //  if(self->t_id == "fetch_tsload_4" || self->t_id == "load_tsload_4" || self->t_id == "compute_tsload_4")
    //     printf("t4 at %d with %s\n", self->time, self->t_id.c_str());
    //  printf("fire %s at %d\n", self->t_id.c_str(), self->time);
     if (self->pip==1) self->time += 1;
     else self->time += delay_time;
     self->delay_event = mature_time;
     self->count += 1;
  }
}

__attribute__((optimize("O3")))
int min_time(transition* self){

   if(self->delay_event != -1) 
     return self->delay_event;
   return LARGE;
}

__attribute__((optimize("O3")))
int min_time_g(transition** all_ts, int size){

  int min = LARGE;
   for(int i=0; i<size; i++){
    int _t = min_time(all_ts[i]);
    // printf("%d ", _t);
    if (min > _t)
        min = _t;
  }
  return min;
}

__attribute__((optimize("O3")))
vector<string>* min_time_t(transition** all_ts, int min_t, int size){
  vector<string>* min_ts = new vector<string>;
   for(int i=0; i<size; i++){
    int _t = min_time(all_ts[i]);
    // printf("%d ", _t);
    if (min_t == _t){
        min_ts->push_back(all_ts[i]->id);
    }
  }
  return min_ts;
}


__attribute__((optimize("O3")))
int sync(transition* self, int time){

   if (self->delay_event == -1){
      self->time = time;
      return 1;
   }
   
   if(time >= self->delay_event){
    
    //  int can_fire = able_to_fire_t(self);
    //  int sel = self->id == "fetch_tsload_4" || self->id == "load_tsload_4" || self->id == "compute_tsload_4";
    //  if (sel && !can_fire){
    //     printf("not fired %s\n", self->id.c_str());
    //     // self->binding.clear();
    //     // for(int i=0;i<N;i++) self->p_touch_ltime[i] = -1;
    //     self->delay_event = -1;
    //     return 0;
    //  }

    // reordered the two
     accept_t(self);
     fire_t(self);
     self->delay_event = -1;
   }
   return 0;
}

// // __attribute__((optimize("O3")))
// void init_t(transition *self){
//   self->delay_event = -1;
//   self->count = 0;
//   self->time = 0;
// }

// // __attribute__((optimize("O3")))
// void init(place *self){
// }

#endif
