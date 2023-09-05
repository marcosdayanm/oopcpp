#include <iostream>
using namespace std;

class account{
protected:
string usern, pass;
public:
void print(){
  cout<<"Username: "<<user<<endl;
  cout<<"Password: "<<pass<<endl;
}
};

class user: private account{
public:
void set_data(string u, string p){
  usern = u;
  pass = p;
}

};




int main() {

  user u1;
  u1.set_data("Marcos", "Hola");
  u1.print(); // debe de marcar error ya que estamos llamando una función desde una clase que es private

  return 0;
}