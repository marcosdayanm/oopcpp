#include <iostream>
using namespace std; 


class math{
public:
float x,y;
char op;

float sum(){
  return x+y;
}

float sub(){
  return x-y;
}

float mult(){
  return x*y;
}

float div(){
  return x/y;
}

};



int main() {

math fst;
  
  cout<<"Enter the first value: ";
  cin>> fst.x;

  cout<<"Enter the operator (+,-,*,/): ";
  cin>> fst.op;

  switch(fst.op){

    
  }


  
  cout<<"Enter the second value: ";
  cin>> fst.y;
  
  
  return 0;
}