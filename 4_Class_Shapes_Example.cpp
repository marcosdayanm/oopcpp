#include <iostream>
using namespace std;

const double PI = 3.141592;

class shape{
float radius, side;

public:
shape(float r, float s){
  radius = r;
  side = s;
}

float circle_p(){
  return 2*PI*radius;
}

float circle_a(){
  return PI*radius*radius;
}

float square_p(){
  return side*4;
}

float square_a(){
  return side*side;
}


};



int main() {
  while(true){
  int opt;
  cout<<"Choose the option number between:"<<endl<<"1. Circle"<<endl<<"2. Square"<<endl<<"3. Exit"<<endl;
cin>>opt;

if (opt == 1){
  float r;
  cout<<"Enter the radius: ";
  cin>>r;
  shape c (r,0);
  cout<<endl<<"The circle perimeter is: "<<c.circle_p()<<endl;
  cout<<"The circle area is: "<<c.circle_a()<<endl<<endl;
}

else if (opt==2){
  float s;
  cout<<"Enter the side length: ";
  cin>>s;
  shape sq (0,s);
  cout<<endl<<"The square perimeter is: "<<sq.square_p()<<endl;
  cout<<"The square area is: "<<sq.square_a()<<endl<<endl;
}

else if (opt == 3){
  cout<<endl<<endl<<"Finishing the program";
  break;
}

else{
  cout<<endl<<"Invalid input, try again"<<endl;
}
    
    
  }
  
  return 0;
}