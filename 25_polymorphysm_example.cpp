#include <iostream>
using namespace std;

class shape{
protected:
int val1, val2;

public:
void area(){
  cout<<"Insert value 1: ";
  cin>>val1;
  cout<<"Insert value 2: ";
  cin>>val2;
  }
};

class rectangle: public shape{
public:
void area(){
  cout<<"Rectangle area is: "<<val1*val2<<"m²"<<endl;
  }
};

class triangle: public shape{
public:
void area(){
  cout<<"Triangle area is :"<<(val1*val2)/2<<"m²"<<endl;
  }
};


int main() {
  rectangle r;
  triangle t;
  shape *br = &r;
  shape *bt = &t;

  cout<<"Length and width of the rectangle"<<endl;
  br ->area();
  cout<<endl<<"Height and base of the triangle"<<endl;
  bt ->area();
  cout<<endl;
  
  r.area();
  t.area();
  
  return 0;
}