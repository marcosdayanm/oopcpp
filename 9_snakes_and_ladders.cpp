#include <iostream>
#include <time.h>
using namespace std;
// SNAKES AND LADDERS BY MARCOS DAYAN A01782876 

class game{
protected:
string name;
char tiles_arr[30] = {};
int s_dice, position = 0;

public:

void set_name(string n){
  name = n;
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

  // this for loop prints a number above the board to make easier the count
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

  // this for loop prints the board above the numbers of it
  for (int p=0; p<30; p++){
    cout<<tiles_arr[p]<<" ";
}
cout<<endl<<endl;
}

void dice(){
  srand(time(0)); 
  
  s_dice = (rand() % 6) + 1; 
} // método que simula un tiro aleatorio con dado

int play(){
  
  char x;
  cout<<"Actual tile position of "<<name<<": "<<position<<endl;
  cout<<endl<<name<<", are you ready to throw the dice? "<<endl<<"Write any letter and press enter to throw it: ";
  cin>>x;
  
  dice();
  cout<<endl<<name<<" got the number "<<s_dice<<" on his shot!"<<endl;
  position += s_dice;

  if (position >30){
    cout<<endl<<"Looks like we have a winner! The winner is: "<<name<<"!!!"<<endl<<endl;
    cout<<endl<<"GAME OVER";
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




class turns: protected game{
protected:
char ce;
int turn = 0; int p_turn = 1;

public:
int c_e(){
  
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
        
        
      } // if
      else if (ce == 'C'){
        if (p_turn==1){
          // NECESITO BORRAR LA CONSOLA ACÁ, ESTARÍA MUY BIEN
          turn ++;
          cout<<endl<<"        Round #"<<turn<<endl<<endl;
          cout<<"Player 1 turn: "<<endl;
          p_turn = 2;
          return 0;
          break;
        }
        else if (p_turn==2){
          cout<<endl<<"        Round #"<<turn<<endl<<endl;
          cout<<endl<<"Player 2 turn: "<<endl;
          p_turn = 1;
          return 0;
          break;
        }
      } // if 
    
        else{
          cout<<"Invalid option, please press C to continue next turn or E to end the game"<<endl<<endl;
          continue;
        }
    
  } // while
  
} // método para saber si quieren acabar el juego o seguir jugando PENDIENTE PONER LO DE EXIT


};




int main() {

  int win, end; // variables que guardan la información para finalizar el programa cuando sea
  string p1n, p2n; // variables para guardar el input de los nombres

  game p1, p2; // los objetos de los jugadores
  turns ts;
  
  p1.tiles(); // métodos que generan el tablero del juego
  p2.tiles();

  p1.print_tiles(); // con este método se imprime el tablero con números en su parte superior para contar qué numero de tile es




  // Inicializador del juego
  cout<<endl<<"WELCOME TO SNAKE AND LADDERS"<<endl<<endl;
  cout<<"Please insert Player 1 name: ";
  cin>>p1n;
  cout<<"Please insert Player 2 name: ";
  cin>>p2n;
  p1.set_name(p1n);
  p2.set_name(p2n);
  cout<<"Perfect! We are ready to start, "<<p1n<<" and "<<p2n<<", let's begin!"<<endl<<endl;


  
  
// Loop que controla el flujo del juego, y determina cuand acabar la partida
  while (true){
  
  end = ts.c_e(); 
  if (end==1){
    break;
  }
    
  win = p1.play();
  if (win==1){
    break;
  }
    
  end = ts.c_e();
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