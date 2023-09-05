#include <iostream>
using namespace std;



class base{
public:
base(int x){
  cout<<"Base and "<<x<<endl;
} // estos métodos son constructors
};

class derived: public base{
public:

/*
derived(){
  cout<<"Derived"<<endl;
} // estos métodos son constructors
*/

using base::base; // con esta línea, se agarra el constructor de la clase madre porque esta clase no tiene, lo comenté

};



int main() {
  derived d(10);
  
  return 0;
}