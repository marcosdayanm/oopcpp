#include <iostream>
using namespace std;

class students{
string name;
int id;
float m1, m2, m3, av;

public:
students(string n_, int id_, float m1_, float m2_, float m3_){
  name = n_;
  id = id_;
  m1 = m1_;
  m2 = m2_;
  m3 = m3_;
}

float average(){
  av = (m1+m2+m3)/3;
  return av;
}

void print(){
  cout<<"Name: "<<name<<endl;
  cout<<name<<"'s id is: "<<id<<endl;
  cout<<name<<"'s grade 1 is: "<<m1<<endl;
  cout<<name<<"'s grade 2 is: "<<m2<<endl;
  cout<<name<<"'s grade 3 is: "<<m3<<endl;
  cout<<name<<"'s average is: "<<av<<endl<<endl;
}

};




int main() {

  students s1("Jason", 55667, 94.7, 89, 85.5);
  float av1 = s1.average();
  
  students s2("Michael", 39842, 82, 98.2, 92.3);
  float av2 = s2.average();
  


  cout<<"Tecnologico de Monterrey is posting the information of the student with greater average to congratulate him, which is: "<<endl<<endl;
  if (av1 > av2){
    s1.print();
  }
  else if (av1 < av2){
    s2.print();
  }
  else{
    cout<<"We have two students with the same average! They are: "<<endl<<endl;
    s1.print();
    s2.print();
  }

  return 0;
}