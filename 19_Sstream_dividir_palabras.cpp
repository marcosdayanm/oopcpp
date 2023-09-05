#include <iostream>
#include <sstream>
#include <string>
using namespace std;


int main() {

  string linea = "John,Mark,Sarah";    // vamos a dividir esta línea de nombres
  string row[3];        // array en donde se van a guardar los nombres individuales
  string word;
  int i=0;

  stringstream ss(linea);   // clase stringstream y objeto ss metiendole un cosntructor

  while (getline(ss,word,',')){   // comando getlone, lee cada línea de ss, se guarda en word y separa las palabras por una coma
    row[i] = word;       // se guarda cada posición de word en ek index del array de row
    cout<<row[i]<<endl;
    i++;
  }

  
  return 0;
}