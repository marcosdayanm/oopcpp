#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  string username;

  cout<<"Type the username: ";

  cin.ignore();             // poner esto para que funcione
  getline(cin,username);    // para validar strings que tengan espacios

  if (username == "Marcos Dayan"){
    cout<<"Welcome "<<username;
  }

  

  
  
  return 0;
}