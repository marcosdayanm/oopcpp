#include <iostream>
using namespace std;


class parents{
protected:
string mN, fN;

public:
void setValue(){
  cout<<"Enter the father name: ";
  cin>>fN;
  cout<<"Enter the mother name: ";
  cin>>mN;
  }

virtual void print() =0;
};

class kids: public parents{
string kN;

public:
void setValue(){
  cout<<"Enter the kid name: ";
  cin>>kN;
}
void print(){
  cout<<"The family parents are: "<<fN<<" and "<<mN<<endl;
  cout<<"The kid name is "<<kN<<endl;
}
};



int main() {
  kids k1, k2;
  parents *f1 = &k1;
  parents *f2 = &k2;

  cout<<"First family: "<<endl;
  f1 ->setValue();
  k1.setValue();
  k1.print();

  cout<<endl<<"Second family"<<endl;
  f2 ->setValue();
  k2.setValue();
  k2.print();

  
}
