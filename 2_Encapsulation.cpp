#include <iostream>
using namespace std;

class employee{
private:
float s;
string n;

public:
void set_data(string nout, float sout){
  s = sout;
  n = nout;
}

void show(){
  cout<<"Employee's name is: "<<n<<endl;
  cout<<"Employee's salary is: "<<s;
}

};




int main() {
  
  employee emp1;

  emp1.set_data("Jose",10000.2);
  emp1.show();
  
  return 0;
}