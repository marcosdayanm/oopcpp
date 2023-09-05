#include <iostream>
using namespace std;

/* PRIMER EJEMPLO DE HERENCIA BÁSICA
class vehicle{
public:
string brand;
void display(){
  cout<<"The brand is: "<<brand<<endl;
}

};

class car: public vehicle{
public:
string model;
void print(){
  cout<<"The car model is: "<<model<<endl;
}

};


int main() {
  car c;
  c.brand = "Ford"; // Esto es de la clase padre y estamos accediendo desde la clase "car"
  c.model = "Mustang";
  c.display();
  c.print();
  
  
  return 0;
}
*/

/* EJEMPLO 2 CON UN ATRIBUTO PRIVATE
class mother{
string m_name;
public:
void set_data(string mn){
  m_name = mn;
}

void print_m(){
  cout<<"The mother name is: "<<m_name<<endl;
}
};

class daughter: public mother{
public:
string d_name;
void print_d(){
  cout<<"The daughter's name is: "<<d_name<<endl;
}
};

int main(){

  daughter d1;
  d1.set_data("Carmen");
  d1.d_name = "Elisa";
  d1.print_m();
  d1.print_d();

  return 0;
}
*/


/* EJEMPLO 3 CON ARRAYS
class array_{
public:
int a[5] = {3,10,2,5,8};
int find(int num){
  for (int i=0; i<5; i++){
    if (num == a[i]){
      return i;
    } // if
  } // for
  return -1; 
} // method find

};


class math: public array_{
public:
void suma(){
  int s=0;
  for(int i=0; i<5; i++){
    s+=a[i];
  }
  cout<<"The summatory result is: "<<s<<endl;
} // suma method

void maxnum(){
  int m = a[0];
  for (int i=0; i<5; i++){
    if (m<a[i]){
      m=a[i];
    }
  } // for
  
  cout<<"The maximum number is: "<<m<<endl;
  
} // maxnum method

}; // class math


int main(){
  class math m;

  int x = m.find(500);

  if (x==-1){
    cout<<"We didn't found the number"<<endl;
  }
  else{
    cout<<"The index is: "<<endl;
  }
  
  m.suma();
  m.maxnum();
  
  return 0;
}
*/






