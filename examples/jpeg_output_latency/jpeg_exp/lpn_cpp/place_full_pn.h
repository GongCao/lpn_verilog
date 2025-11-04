#ifndef __PLACE__
#define __PLACE__

#include "place_transition.hpp"

NEW_TOKEN(empty_token, global_empty_token);

void create_empty_queue(QT_type(empty_token*)* tokens, int num ){
  for(int i=0;i<num;i++){
    tokens->push_back(global_empty_token);
  }
}

place<> ptasks("ptasks"); 
place<> p0("p0"); 
place<> p1("p1");
place<> p2("p2"); 
place<> p3("p3");
place<> p4("p4"); 
place<> p5("p5");
place<> p6("p6"); 
place<> p7("p7");
place<> p8("p8"); 
place<> p10("p10");
place<> p11("p11"); 
place<> p20("p20");
place<> p21("p21"); 
place<> p22("p22");
place<> pdone("pdone"); 
place<mcu_token> pvarlatency("pvarlatency");

#endif
