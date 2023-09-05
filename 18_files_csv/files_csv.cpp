#include <iostream>
#include <fstream>
using namespace std;


int main() {

  // ifstream es una clase adentro de la librería fstream
  ifstream fr;
  fr.open("file.csv");

  string line;

  while(getline(fr,line)){
    cout<<line<<endl;
  } // con este while loop podemos imprimir un archivo linea por linea, getline va a parar de funcionar hasta que se acaba las líneas, es nuestra condicion del while loop

  fr.close();

  ofstream fw;

  fw.open("file2.csv");
  fw<<101<<","<<"Carlos"<<","<<100<<endl;
  fw<<102<<","<<"Juan"<<","<<95<<endl;
  fw<<103<<","<<"Jose"<<","<<87<<endl;
  fw<<104<<","<<"Max"<<","<<92<<endl;

  ifstream fw1;
  fw1.open("file2.csv");
  while(getline(fw1,line)){
    cout<<line<<endl;
  }

  fw1.close();

  
  
  return 0;
}