#include <iostream>
using namespace std;

class hotel{
protected:
int room_no;
int key;
float price;

public:
hotel(int rn, int k, float pr){
  room_no = rn;
  key = k;
  price = pr;
}
};


class client: private hotel{
string name;
int id, numNights;
float finalPrice;

public:
client(int rn, int k, float pr, string n, int idout, int nN): hotel(rn,k,pr){
  name = n;
  id = idout;
  numNights = nN;
}

void calculate(){
  finalPrice = numNights*price;
}


void print(){
  cout<<"The room number is: "<<room_no<<endl;
  cout<<"The room key is: "<<key<<endl;
  cout<<"The client is: "<<name<<endl;
  cout<<"The client ID is: "<<id<<endl;
  cout<<"The price per night is: "<<price<<endl;
  cout<<"The number of nights is: "<<numNights<<endl;
  cout<<"The total price is: "<<finalPrice<<endl;
  
}
};






int main() {

  client c1(101,52964,2099.45,"Marcos",1423,4);
  c1.calculate();
  c1.print();

  return 0;
}