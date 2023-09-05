#include <iostream>
using namespace std;


class mammal{
public:
  void printm(){
    cout<<"Mammals can give direct birth "<<endl;
}
};

class wingedAnimal{
public:
  void printw(){
    cout<<"Winged animals can fly"<<endl;
  }
};

class bat: public mammal, public wingedAnimal{
public:
};


int main() {

  bat b1;

  b1.printw();
  b1.printm();



  return 0;
}