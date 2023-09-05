#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

// ORORO.TV     FUN WAYS TO LEARN ENGLISH    https://ororo.tv/es
// MADE BY EDUARDO MITRANI AND MARCOS DAYAN


class videos{
protected:
int len;
string id, name, genre, comm;
float rat; 

public:

void set_data(string i, string n, string g, int l, float r, string c){
  id = i;
  name = n;
  genre = g;
  len = l;
  rat = r;
  comm = c;
}

void design(){
  cout<<endl<<endl;
  cout<<" ID |              Name              |   Genre   | Length | Rating | Comments "<<endl<<"---------------------------------------------------------------------------------"<<endl;
}

void print(){

cout<<id<<" | "<<setw(35)<<left<<name<<setw(10)<<left<<genre<<setw(9)<<left<<len<<setw(9)<<left<<rat<<setw(1)<<left<<comm<<endl;

}

void search(videos v[], int size, int type){   // este es el formato para pasar un array de objetos a una función
  string name, id, genre;
  int x, count = 0;
  
  
  while (true){
  cout<<endl<<"How do you want to search the content?"<<endl<<"1. Name"<<endl<<"2. ID"<<endl<<"3. Genre"<<endl<<"Insert the number of the option: ";
  cin>>x;

  if (x == 1){
    cout<<endl<<endl<<"Search the content by name: ";
    cin.ignore();
    getline(cin,name);
  
    for (int i=0; i<30;i++){
      if (v[i].name == name){
        cout<<endl<<endl;
        v[i].design();
        v[i].print();
        v[i] = v[0].evaluate(v[i]);
        count++;
      }
    }
    if (count == 0){
      cout<<endl<<"No results found"<<endl<<endl;
    }
  } // if x=1

  else if (x == 2){
    cout<<endl<<"Search the content by ID: ";
    cin>>id;

    v[0].design();
    
    for (int i=0; i<30;i++){
      if (v[i].id == id){
        v[i].print();
        count++;
      }
    }
    if (count == 0){
      cout<<endl<<"No results found"<<endl<<endl;
    }
  }

  else if (x == 3){
    int count = 0;
    cout<<endl<<"Search the content by genre: ";
    cin>>genre;

    v[0].design();
    
    for (int i=0; i<30;i++){
      if (v[i].genre == genre){
        
        v[i].print();
        count++;
      }
    }
     if (count == 0){
      cout<<endl<<"No results found"<<endl<<endl;
    }

    }

    
  else{
    cout<<"Incorrect Input, try again"<<endl<<endl;
    continue;
  }

    cout<<endl<<endl;
    break;} // while

  

} // función

void dispvideos(videos v[], int size, videos v2[], int size2){
  v[1].design();
  for (int i=0; i<size; i++){
    v[i].print();
  }
  
  for (int j=0; j<size2; j++){
    v2[j].print();
  }
  
  
}

videos evaluate(videos v){
  int y;
  float eva;
  string comment;
  while(true){
    cout<<endl<<endl<<"Do you want to add a rating or comment to the content you just searched?"<<endl<<"Note: Rating or comments added will be automatically saved when exiting the platform"<<endl<<"1. Rating"<<endl<<"2. Comment"<<endl<<"3. No"<<endl<<"Select the option: ";
    cin>>y;

    if(y==1){
      cout<<endl<<"What rating would you give it from 1-5: "<<endl;
      cin>>eva;
      v.rat = (v.rat + eva)/2;
      cout<<"Here is the new rating of "<<v.name<<":"<<endl<<endl;
      v.design();
      v.print();
      return v;
      }

    else if(y==2)     {
      cout<<endl<<"Add a comment: ";
      cin.ignore();
      getline(cin,comment);
      v.comm=comment;
      cout<<"Here is the new comment of "<<v.name<<":"<<endl<<endl;
      v.design();
      v.print();
      return v;
    }  

    else {
      return v;
      break;}
    } // else
  
  }  // funcion evaluate

void save( ofstream& fwm, ofstream& fws, videos v1[], int size1, videos v2[], int size2){

    fwm.open("movies.csv");
    fws.open("series.csv");

  
  for (int i=0; i<30; i++){
    fwm<<v1[i].id<<","<<v1[i].name<<","<<v1[i].genre<<","<<v1[i].len<<","<<v1[i].rat<<","<<v1[i].comm<<endl;
   }

  for (int i=0; i<30; i++){
    fws<<v2[i].id<<","<<v2[i].name<<","<<v2[i].genre<<","<<v2[i].len<<","<<v2[i].rat<<","<<v2[i].comm<<endl;
    }
  
  fwm.close();
  fws.close();}
  

};

class movies: public videos{
public:
void dispvideos(movies m[], int size){
  m[1].design();
  for (int i=0; i<size; i++){
    m[i].print();
  }
}
};

class series: public videos{
public:
void dispvideos(videos s[], int size){
  s[1].design();
  for (int i=0; i<size; i++){
    s[i].print();
  }
}
};



int main() {
  // Creación de,los arrays de objetos
  movies m[30];
  series s[30];

  // pointers de la clase padre apuntando al primer elemento de array de objetos
  videos *vm = &m[0];
  videos *vs = &s[0];
  
  ifstream fm, fs;
  ofstream fwm, fws;
  string mline, sline;
  int jm=0, js=0;

  
  // Apertura de Files
  fm.open("movies.csv");
  fs.open("series.csv");

  // Escribir el archivo de movies en su array de objetos
  while(getline(fm,mline)){
  int i=0;
    string mword;
    string mrow[6];
    stringstream mss(mline);
    while(getline(mss,mword,',')){
      mrow[i]=mword;
      i++;
  }
m[jm].set_data(mrow[0],mrow[1],mrow[2],stoi(mrow[3]),stof(mrow[4]),mrow[5]); 
    jm++;
}

  // Escribir el archivo de series en su array de objetos
  while(getline(fs,sline)){
  int k=0;
    string sword;
    string srow[6];
    stringstream sss(sline);
    while(getline(sss,sword,',')){
      srow[k]=sword;
      k++;
  }
s[js].set_data(srow[0],srow[1],srow[2],stoi(srow[3]),stof(srow[4]),srow[5]); 
    js++;
}
  
  

  // Menú principal interfaz del usuario y llamado de funciones
  cout<<endl<<"                   WELCOME TO ORORO.TV"<<endl;
  cout<<"               Fun ways to learn Enlgish"<<endl;

  while(true){
    int option;
    cout<<endl<<endl<<"Select the following option you want to perform:"<<endl;
    cout<<"1. Display all videos"<<endl;  
    cout<<"2. Display all movies"<<endl;  
    cout<<"3. Display all series"<<endl; 
    cout<<"4. Search movies by name, ID or genre"<<endl;
    cout<<"5. Search series by name, ID or genre"<<endl; 
    cout<<"6. Exit"<<endl;
    cout<<"Select the option: ";
    cin>>option;
    cout<<endl<<endl;    // formato


    int ex = 0;
    
    switch(option){

      case 1:
        vm->dispvideos(m,30,s,30);
        break;
      
      case 2:
        m[0].dispvideos(m,30);
          break;

      case 3:
        s[0].dispvideos(s,30);
          break;

      case 4:
        m[0].search(m,30,1);
        break;

      case 5:
        s[0].search(s,30,2);
        break;


      case 6:
        ex = 1;
        cout<<endl<<"Exiting Ororo.tv";
        break;
      
    }

    if (ex == 1){
      fm.close();
      fs.close();
      m[30].save(fwm, fws, m, 30, s, 30);
      break;
    }
    else{
      continue;
    }
  }
  
  return 0;
}