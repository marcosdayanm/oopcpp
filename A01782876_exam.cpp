#include <iostream>
using namespace std;


class employee{
protected:
string name, CURP;
int hpw;
float sph;

public:
employee(string n, string c, int h, float s){
  name = n;
  CURP = c;
  hpw = h;
  sph = s;
}


};

class programmer: public employee{
protected:
float bonusExtra;


public:
programmer(string n, string c, int h, float s, float b):employee(n,c,h,s){
  bonusExtra = b; }

float getsalary(){
  return hpw*sph;}

float getbonus(){
  if (hpw>40){
    int exh = hpw-40;
    exh *= bonusExtra;
    return exh;}
  else{
    return 0;}
}

void showinfo(){
  cout<<"Printing the Programmer's information"<<endl<<endl;
  cout<<"Name: "<<name<<endl;
  cout<<"CURP: "<<CURP<<endl;
  cout<<"Hours per week worked: "<<hpw<<endl;
  cout<<"Salary per Hour: "<<sph<<endl;
  cout<<"Bonus per Extra Hour: "<<bonusExtra<<endl;
}

string retname(){
  return name;
}

};


int main() {
string name, CURP;
int hpw;
float sph, bonusExtra;

cout<<"Insert name of the programmer: ";
cin>>name;
cout<<"Insert CURP of the programmer: ";
cin>>CURP;
cout<<"Insert hours worked per week of the programmer: ";
cin>>hpw;
cout<<"Insert salary per hour of the programmer: ";
cin>>sph;
cout<<"Insert bonus per extra hour of the programmer: ";
cin>>bonusExtra;


programmer p1(name, CURP, hpw, sph, bonusExtra);

float norsalary = p1.getsalary();
float bonus = p1.getbonus();
string nameout = p1.retname();

float totsalary = norsalary + bonus;
p1.showinfo();
cout<<"The salary for regular hours of "<<nameout<<" is: "<<norsalary<<endl;
cout<<"The bonus calculated for extra hours of "<<nameout<<" is: "<<bonus<<endl;
cout<<"The total salary of "<<nameout<<" is: "<<totsalary<<endl;
  
  return 0;
}