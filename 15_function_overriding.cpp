#include <iostream>
using namespace std;

class base{
int x;
public:
void set_data(int a){
  x = a;
}
void print(){
  cout<<"This is base, "<<x<<endl;
}
};

class derived: public base{
int y;
public:
void set_data(int a, int b){
  y=b;
  base::set_data(a);

  
}
void print(){
  base::print(); // así se puede mandar los datos a la otra función de la clase madre
  cout<<"This is derived, "<<y<<endl;
}
};


int main() {

  derived d;
  d.set_data(-3,10);
  d.print();

  return 0;
}