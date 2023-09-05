#include <iostream>
using namespace std;

/* EJEMPLO 1

class base{
public:
void print(){
  cout<<"base"<<endl;
}
};

class derived: public base{
public:
void print(){
  cout<<"derived"<<endl;
}
};

int main() {
  
  derived d;
  d.print();          //se llama automáticamente la fincuipon de la derived class

  base *b = &d;       // los objetos pointers se deben crear desde la clase mas alta para tener acceso a todas las herencias
  b->print();

  return 0;
}  
*/


class enemy{
protected:
int attack_power;
public:
void attack(int a){  // es un set_data pero se llama attack para Polymorphysm
  attack_power = a;
}
};

class ninja: public enemy{
public:
void attack(){
  cout<<"Attack Power of Ninja is: "<<attack_power<<endl;
}
};

class monster: public enemy{
public:
void attack(){
  cout<<"Attack Power of Monster is: "<<attack_power<<endl;
}
};



int main(){

  ninja n;
  monster m;
  enemy *e1 = &n, *e2 = &m;

  e1->attack(10);  // esto fue el set_data
  e2->attack(20);
  
  n.attack();
  m.attack();

  return 0;
}




