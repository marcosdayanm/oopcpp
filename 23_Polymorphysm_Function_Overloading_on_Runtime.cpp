#include <iostream>
using namespace std;

class base{
public:
void fun(int x){
  cout<<x<<endl;
}
void fun(double x){
  cout<<x<<endl;
}
void fun(int x, int y){
  cout<<x<<"   "<<y<<endl;
}

};


int main() {
  base p;

  p.fun(2);
  p.fun(5.5);
  p.fun(5, 7);
  return 0;
}