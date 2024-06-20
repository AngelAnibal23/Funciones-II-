/*
C�lculo del �rea de un C�rculo: Implementa un programa que calcule el �rea de un c�rculo dado su
radio. Utiliza la constante M_PI de la librer�a cmath para obtener el valor de pi. 
Solicita al usuario elradio del c�rculo y utiliza la funci�n pow de cmath para calcular el cuadrado del radio. 
Muestra el resultado del �rea calculada.
*/

#include <iostream>
#include <cmath>
using namespace std; 

float AreaCirculo(float x){
	float pi; 
	
	pi=M_PI; 
	
	return pow(x,2)*pi; 
}

int main(){
	float radio, area; 
	
	cout<<"Digite el radio del circulo: "; 
	cin>>radio; 
 
 	if(radio==0){
 		cout<<endl<<"El radio ingresado no representa una circunferencia. "; 
		
		return 1; 	
 	}
 	else if(radio<0){
 		cout<<endl<<"El radio no puede tomar valores negativos. "; 
		
		return 2; 
 	}
 	
	
	area= AreaCirculo(radio);
	
	cout<<endl<<"El area del circulo es: "<<area<<endl;  
	
	return 0; 
}

