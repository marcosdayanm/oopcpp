#include <iostream>
using namespace std;

int suma(int *n, int size){
  int s=0;
  for (int i=0; i<size; i++){
    s+= n[i];
    }
  return s;
}



int main() {
  
  int a[5] = {1,3,5,7,9};
  int *n;
  n = a;

  
  
  //for (int i=0; 1<5; i++){
    //cout<<"Using index: "<<n[i]<<endl;
    
    //cout<<"Using pointer: "<<*n<<endl;
    //n++;
  //}


  int size = sizeof(a)/4;
  
  int result = suma(a,size);
  cout<<result<<endl;
  
  
  return 0;
}