#include <iostream>
using namespace std;

int main() {

  int x = 100;
  cout<<"This is the value: "<<x<<endl;
  cout<<"This is the reference: "<<&x<<endl;


  int *ptr = &x;
  cout<<"Así se imprime a lo que apunta el pointer: "<<*ptr<<endl;
  cout<<"Así se imprime la dirección que tiene el pointer guardada: "<<ptr<<endl;
  
  return 0;
}