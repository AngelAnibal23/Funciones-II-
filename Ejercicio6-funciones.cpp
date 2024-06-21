/*
Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y
tijeras contra la computadora. El usuario elegirá su jugada (piedra, papel o tijeras) y la computadora
generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las
reglas del juego. El juego continuará hasta que el usuario o la computadora gane 3 rondas. Muestra el
resultado final indicando el ganador del juego.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main(){
	int opcion, computadora;
		
    srand(time(0));

 	computadora = 1 + rand()%3; 
	
	cout<<"Seleccione su accion: 1)Piedra, 2)Papel, 3)Tijeras: "; 
	cin>>opcion; 
	
	if(opcion == 1 && computadora == 2){
		cout<<endl<<"¡GANASTE!"; 
	}
	else if(opcion== 2 && computadora == 1){
		cout<<endl<<"¡GANASTE!"; 
	}
	else if(opcion == 3 && computadora == 2){
		cout<<endl<<"¡GANASTE!"; 
	}
	else if(opcion==computadora){
		cout<<endl<<"Empate. "; 
	}
	else{
		cout<<endl<<"Perdiste. "; 
	}
	
	return 0; 
}
