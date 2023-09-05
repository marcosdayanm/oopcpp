#include <iostream>
using namespace std;

class base{
protected:
int x;
public:
base(int a){
  x = a;
}
};


class derived: public base{
private:
int y;
public:
derived(int b, int a): base(a){
  y = b;
}
int suma(){
  return x+y;
}
};


int main() {
  
  derived d(10,245);
  derived d2(100,200);
  
  cout<<d.suma()<<endl;
  cout<<d2.suma()<<endl;
  
  return 0;
}