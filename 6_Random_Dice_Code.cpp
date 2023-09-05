#include <iostream>
#include <time.h> // librería que se conecta con el tiempo
using namespace std;

int main() {

  srand(time(0)); // esta línea es para usar el "seed" conectado con el tiempo
  
  int x = (rand() % 6) + 1; // esta línea hace que se generen números random usando el tiempo, module 6 hace que solo caigan números del 0-5 y se le suma 1 a este dresultado para que los números probables que salgan sean del 1-6, como en un dado
  cout<<x;
  
  
  
  return 0;
}