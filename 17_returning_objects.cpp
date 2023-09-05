#include <iostream>
using namespace std;

class student{
int id;
float grade;
string name;

public:

student (int idout, string n, float g){
  id = idout;
  name = n;
  grade = g;
}

student average(student s1, student s2, student s3){
  student sp(105,"Jonathan",0);
  sp.grade = (s1.grade+s2.grade+s3.grade)/3;
  return sp;
}

void print(){
  cout<<"Student's name: "<<name<<endl;
  cout<<"Student's ID: "<<id<<endl;
  cout<<"Student's grade: "<<grade<<endl;
}

};


int main() {

  student s1(123,"Marcos",99.87);
  student s2(456,"David",75.2);
  student s3(789,"James",92.3);
  student s4 = s1.average(s1,s2,s3); // necesitamos crear el objeto para que el return de s4 tenga a donde llegar, aunque se creo en el metodo con un constructor

  // podemos hacerlo de esta manera, o también crear un objeto vacío, y luego igualar el objeto a la función average en donde está el constructor de nuestro objeto, de ambas maneras es correcto


s4.print();
  
  return 0;
}