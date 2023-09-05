#include <iostream>
using namespace std;


class employee{
private:
string name;
int salary,id;

public:
employee(string n_o, int s_o, int i_o){
  name = n_o;
  salary = s_o;
  id = i_o;
}

void print(){
  cout<<"The employee's name is: "<<name<<endl;
  cout<<"The employee's ID is: "<<id<<endl;
  cout<<"The employee's salary is: "<<salary<<endl;

  
}

};


int main() {

  employee emp1("Juan", 20000, 30102);
  employee emp2("Ricky", 67584, 57535);

  emp1.print();
  emp2.print();
  
  return 0;
}