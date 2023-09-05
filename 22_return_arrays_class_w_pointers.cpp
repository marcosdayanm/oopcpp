#include <iostream>
using namespace std;

class array_{
int n[5];

public:
int *read(int size){
  for (int i=0; i<size; i++){
    cout<<"Enter the value: ";
    cin>>n[i];
  }
  return n;
}
};


int main() {
  
  array_ a;

  int *numbers;   // hacer variable pointer para que el pointer de la función tenga donde llegar
  numbers = a.read(5);  // llamar la función con el tamño del array

  for (int i=0; i<5; i++){
    cout<<numbers[i]<<endl;
  }
  
  return 0;
}