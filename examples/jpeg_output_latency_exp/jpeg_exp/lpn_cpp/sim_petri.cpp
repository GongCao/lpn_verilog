#include <assert.h>
#include <chrono>
#include "place_transition.hpp"
#include "place.h"
#include "driver.hpp"

#define T_SIZE 6
#define P_SIZE 20
#define N_SIZE (T_SIZE + P_SIZE)
#define THREAD_NUM 4 
#define LOOP_TS(func) for(int i=0;i < T_SIZE; i++){ \
        transition* t = all_ts[i]; \
        func;  \
    }\


#define con_delay(constant) \
int con_delay_##constant(){ \
    return constant;\
}

con_delay(1)
con_delay(66)
con_delay(65)
con_delay(0)


int take_1_token(){
    return 1;
}

#define take_some_token(constant)\
int take_##constant##_token(){\
    return constant;\
}

take_some_token(0)
take_some_token(4)


int mcu_delay(){
    return pvarlatency.tokens[0]->delay;
}

void pass_empty_token(place<empty_token>* output_place){
    output_place->tokens.push_back(global_empty_token);
    return;
}


void pass_4_empty_token(place<empty_token>* output_place){
    for(int i=0; i<4; i++){
        output_place->tokens.push_back(global_empty_token);
    }
    return;
}

map<string, int> states;
void changed_place_tokens(vector<base_place*>& all_place){
  for(int i = 0; i< all_place.size(); i++){
    base_place* p = all_place[i];
    if (p->tokenLen() != states[p->getId()]){
      cout << p->getId() <<"="<<states[p->getId()] <<"->" << p->tokenLen() << endl;
      states[p->getId()] = p->tokenLen(); 
    }
  }
}

int sim(){
  create_empty_queue(&(p4.tokens), 4);
  create_empty_queue(&(p5.tokens), 7);
  create_empty_queue(&(p6.tokens), 4);
  create_empty_queue(&(p8.tokens), 1);
  create_empty_queue(&(p11.tokens), 4);
  create_empty_queue(&(p20.tokens), 4);

  // create_empty_queue(&(ptasks.tokens), 6);

  // for(int i = 0; i < 6; i++){
  //   NEW_TOKEN(mcu_token, new_token);
  //   new_token->delay = 100; 
  //   pvarlatency.tokens.push_back(new_token);
  // }


  transition t1 = {.id="1", 
  .delay_f=con_delay_0, 
  .pi_w_empty_token={take_1_token,take_1_token}, 
  .pi_w_threshold_empty_token={0,0}, 
  .po_w_empty_token={pass_empty_token}, 
  .pip=-1
  };

  t1.p_input_of_empty_token.push_back(&ptasks); 
  t1.p_input_of_empty_token.push_back(&p8); 
  t1.p_output_of_empty_token.push_back(&p7); 

  transition t0 = {.id="0", 
  .delay_f=mcu_delay, 
  .pi_w_empty_token={take_1_token,take_1_token}, 
  .pi_w_mcu_token={take_1_token}, 
  .pi_w_threshold_empty_token={0,0}, 
  .pi_w_threshold_mcu_token={0}, 
  .po_w_empty_token={pass_empty_token, pass_empty_token}, 
  .pip=-1
  };

  t0.p_input_of_empty_token.push_back(&p7); 
  t0.p_input_of_empty_token.push_back(&p4); 
  t0.p_input_of_mcu_token.push_back(&pvarlatency); 
  t0.p_output_of_empty_token.push_back(&p0); 
  t0.p_output_of_empty_token.push_back(&p8); 

  transition t5 = {.id="5", 
  .delay_f=con_delay_65, 
  .pi_w_empty_token={take_1_token,take_1_token,take_1_token}, 
  .pi_w_threshold_empty_token={0,0,0}, 
  .po_w_empty_token={pass_empty_token, pass_empty_token}, 
  .pip=-1
  };

  t5.p_input_of_empty_token.push_back(&p1); 
  t5.p_input_of_empty_token.push_back(&p2); 
  t5.p_input_of_empty_token.push_back(&p3); 
  t5.p_output_of_empty_token.push_back(&pdone); 
  t5.p_output_of_empty_token.push_back(&p6); 
  

  transition t4 = {.id="4", 
  .delay_f=con_delay_66, 
  .pi_w_empty_token={take_1_token,take_1_token,take_4_token}, 
  .pi_w_threshold_empty_token={0,0,2}, 
  .po_w_empty_token={pass_4_empty_token, pass_4_empty_token, pass_empty_token}, 
  .pip=-1
  };

  t4.p_input_of_empty_token.push_back(&p0); 
  t4.p_input_of_empty_token.push_back(&p22); 
  t4.p_input_of_empty_token.push_back(&p6); 
  t4.p_output_of_empty_token.push_back(&p3); 
  t4.p_output_of_empty_token.push_back(&p20); 
  t4.p_output_of_empty_token.push_back(&p4); 
  
  transition t3 = {.id="3", 
  .delay_f=con_delay_66, 
  .pi_w_empty_token={take_1_token, take_4_token, take_0_token}, 
  .pi_w_threshold_empty_token={0,0,2}, 
  .po_w_empty_token={pass_4_empty_token, pass_empty_token, pass_empty_token}, 
  .pip=-1
  };

  t3.p_input_of_empty_token.push_back(&p0); 
  t3.p_input_of_empty_token.push_back(&p21); 
  t3.p_input_of_empty_token.push_back(&p6); 
  t3.p_output_of_empty_token.push_back(&p2); 
  t3.p_output_of_empty_token.push_back(&p22); 
  t3.p_output_of_empty_token.push_back(&p4); 

  transition t2 = {.id="2", 
  .delay_f=con_delay_66, 
  .pi_w_empty_token={take_1_token,take_1_token,take_0_token}, 
  .pi_w_threshold_empty_token={0,0,2}, 
  .po_w_empty_token={pass_empty_token, pass_empty_token, pass_empty_token}, 
  .pip=-1
  };

  t2.p_input_of_empty_token.push_back(&p0); 
  t2.p_input_of_empty_token.push_back(&p20); 
  t2.p_input_of_empty_token.push_back(&p6); 
  t2.p_output_of_empty_token.push_back(&p1); 
  t2.p_output_of_empty_token.push_back(&p21); 
  t2.p_output_of_empty_token.push_back(&p4); 
  
  transition* all_ts[T_SIZE] = { &t0, &t1, &t2, &t3, &t4, &t5}; 

  void* all_place[P_SIZE] = {&ptasks, &p0, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p10, &p11, &p20, &p21, &p22, &pdone, &pvarlatency};

  vector<base_place*> all_place_vector;
  for (int i = 0; i<P_SIZE; i++){
    all_place_vector.push_back((base_place*)all_place[i]);
  }
 
  // place* all_ps[6] = {&p0, &p1, &p2};
  
  
  int time = 0;
  int total = 10000000000;
  
  // int** s_hist = malloc(10000*sizeof(int*));
  // int hist_size = 0; 
  // float throughput = -1;
  int prev_time = 0;
  while(time < total){

    // #pragma omp parallel for num_threads(THREAD_NUM)
    LOOP_TS(trigger(t));
    
    time = min_time_g(all_ts, T_SIZE);

    // vector<string>* min_ts = min_time_t(all_ts, time, T_SIZE);
    // printf("=== compare at %d ===\n", time);

    // for( const auto& st : (*min_ts)){
    //   cout << st << " ";
    // }

    // cout << endl << "=== end ===" << endl;

    if(time == LARGE){
       break;
    }
    prev_time = time;

    LOOP_TS(sync(t, time));
    // changed_place_tokens(all_place_vector);
    // cout << endl << "=== next round ===" << endl;
  } 
  printf("\nlatency %d \n", prev_time);
  return prev_time;
}


int main(int argc, char* argv[]){
  auto start = std::chrono::high_resolution_clock::now();
  lpn_driver(argc, argv);
  sim();
  auto stop = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
  std::cout << "time_elapsed " << duration.count() << " microseconds" << std::endl;
}

