/*
Crea un programa que genere y muestre una serie de n�meros
aleatorios entre 0 y un n�mero m�ximo especificado por el usuario. El programa solicitar� al usuario
la cantidad de n�meros aleatorios que desea generar y el valor m�ximo permitido. Utiliza la funci�n
rand de la librer�a cstdlib para generar los n�meros aleatorios.
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
