/*
Crea un programa que genere y muestre una serie de números
aleatorios entre 0 y un número máximo especificado por el usuario. El programa solicitará al usuario
la cantidad de números aleatorios que desea generar y el valor máximo permitido. Utiliza la función
rand de la librería cstdlib para generar los números aleatorios.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main(){
	int maximo, cantidad, numero_aleatorio, i=1;  
	
	srand(time(0)); 
		
	cout<<"Digite la cantidad de numeros aleatorios que desea obtener: "; 
	cin>>cantidad; 
	cout<<endl<<"Ingrese un numero maximo para generar los numeros aleatorios dentro de un intervalo: "; 
	cin>>maximo; 
	 
	
	do{
		numero_aleatorio= rand()%maximo;
		
		cout<<endl<<numero_aleatorio<<endl; 
		
		i=i+1; 
		
	}while(i<=cantidad); 
	
	
	return 0; 
}
