// SNAKES AND LADDERS BY MARCOS DAYAN A01782876
#include <iostream>
#include <time.h>
using namespace std; 

class game{
protected:
string name;
char ce, tiles_arr[30] = {};
int s_dice, position = 0, turn = 0, p_turn = 1;

public:

void starter(int n){
  if (n==1){
    cout<<endl<<"                  WELCOME TO SNAKE AND LADDERS"<<endl<<endl;
  }
  
  cout<<endl<<"Insert Player "<<n<<" name: ";
  cin>>name; 
}

void tiles(){
for (int i=0; i<30; i++){
  if ((i==4) or (i==13) or (i==22)){
    tiles_arr[i] = 'L';
  }
  else if ((i==9) or (i==17) or (i==28)){
    tiles_arr[i] = 'S';
  }
  else{
    tiles_arr[i] = 'N';
  }

} // for
    
  }  // método para crear el tablero del juego

void print_tiles(){

  cout<<endl<<endl<<endl<<"The board of the game is the following: "<<endl<<endl;
  // este loop imprime números que van a ir arriba de la secuuencia del tablero, para poder numerar las tiles (los numeros de tile 10, 20 y 30 están representados unicamente por su digito decimal 1,2,3)
  for(int i=0; i<3; i++){
    for(int j=1; j<11; j++){
      if (j==10){
        if (i==0){
          cout<<1<<" ";
        }
        else if (i==1){
          cout<<2<<" ";
        }
        else{
          cout<<3<<" ";
        }
      }
      else{
      cout<<j<<" ";
        }
    }
  }
  cout<<endl;

  // este loop imprime las tiles, separadas por un espacio
  for (int p=0; p<30; p++){
    cout<<tiles_arr[p]<<" ";
}
cout<<endl<<endl<<endl;
}

void dice(){
  srand(time(0)); 
  
  s_dice = (rand() % 6) + 1; 
} // método que simula un tiro aleatorio con dado

int c_e(game p1, game p2){
  
  if (turn == 0){
    cout<<"Press C to continue next turn or E to end the game"<<endl;
  }

  while(true){

      cout<<"C/E: ";
      cin>>ce;
      
      if (ce == 'E'){
        //exit();
        cout<<endl<<endl<<"         GAME ENDED"<<endl;
        cout<<"   Thanks for playing, hope you had enjoyed the game"<<endl;
        return 1;
        break;
        
        
      }
      else if (ce == 'C'){
        if (p_turn==1){
          turn ++;
          cout<<endl<<"        Round #"<<turn<<endl<<endl;
          cout<<p1.name<<" turn: "<<endl;
          p_turn = 2;
          return 0;
          break;
        }
        else if (p_turn==2){
          cout<<endl<<"        Round #"<<turn<<endl<<endl;
          cout<<endl<<p2.name<<" turn: "<<endl;
          p_turn = 1;
          return 0;
          break;
        }
      }
    
        else{
          cout<<"Invalid option, please press C to continue next turn or E to end the game"<<endl<<endl;
          continue;
        }
    
  }
  
} // método para saber si quieren acabar el juego o seguir jugando

int play(){
  char x;
  
  cout<<"Actual tile position of "<<name<<": "<<position<<endl;
  cout<<endl<<name<<", are you ready to throw the dice? "<<endl<<"Write any letter and press enter to throw it: ";
  cin>>x;
  
  dice();
  cout<<endl<<name<<" got the number "<<s_dice<<" on his shot!"<<endl;
  position += s_dice;

  if (position >29){
    cout<<endl<<"Looks like we have a winner! The winner is: "<<name<<"!!!"<<endl<<endl;
    cout<<endl<<"             GAME OVER";
    return 1;
  }

  else{
    cout<<name<<" is advancing to the tile number: "<<position<<" which is... a "<<tiles_arr[position-1]<<" tile"<<endl<<endl;
  
    if (tiles_arr[position-1] == 'S'){
      cout<<"Oh no... "<<name<<" stepped on a snake type tile,"<<endl<<"and is going back 3 tiles..."<<endl;
      position-=3;
      cout<<"Now, "<<name<<" is in tile number: "<<position<<endl<<endl;
    }
    else if (tiles_arr[position-1] == 'L'){
      cout<<"Oh yeah! "<<name<<" stepped on a ladder type tile,"<<endl<<"and is going forward 3 tiles!!"<<endl;
      position+=3;
      cout<<"Now, "<<name<<" is in tile number: "<<position<<endl<<endl;
  }
      return 0;
    }
} // método que guarda el valor de la tile de cada jugador, checa en qué tipo de tile cayó el jugador y verifica si ya hay un ganador
};



int main() {

// En esta sección del main, se crean objetos y variables, se ejecutan métodos para crear tablero, insertar nombres, y poder iniciar el juego

  int win, end; // variables que guardan la información para finalizar el programa cuando sea

  game p1, p2; // los objetos de los jugadores

  p1.starter(1);  // Inicializador del juego
  p2.starter(2);
  
  p1.tiles(); // métodos que generan el tablero del juego
  p2.tiles();

  p1.print_tiles(); // con este método se imprime el tablero con números en su parte superior para contar qué numero de tile es

 
// Loop que controla el flujo del juego, y determina cuand acabar la partida
  while (true){
  
  end = p1.c_e(p1, p2); 
  if (end==1){
    break;
  }
    
  win = p1.play();
  if (win==1){
    break;
  }
    
  end = p1.c_e(p1, p2);
  if (end==1){
    break;
  }
    
  win = p2.play();
  if (win==1){
    break;
  }
  } //While true
  
  return 0;
}