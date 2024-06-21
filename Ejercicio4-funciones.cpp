/*
C�lculo de Ra�ces de una Ecuaci�n Cuadr�tica: Crea un programa que calcule las ra�ces de una
ecuaci�n cuadr�tica utilizando la f�rmula general. Utiliza la funci�n sqrt de la librer�a cmath para
calcular la ra�z cuadrada. Solicita al usuario los coeficientes de la ecuaci�n (a, b, c) y muestra las
ra�ces obtenidas. Considera los casos en los que las ra�ces son reales o complejas.
*/

#include <iostream>
#include <cmath>
using namespace std;

int discriminante(int x, int y, int z){
	int calculo; 
	
	calculo = sqrt(pow(y,2)-(4*x*z)); 
	
	return calculo; 
}

int main(){
	int a, b, c, raiz1, raiz2;
	
	cout<<"Digite el valor  de a: "; 
	cin>>a; 
	cout<<"Digite el valor de b: "; 
	cin>>b; 
	cout<<"Digite el valor de c: "; 
	cin>>c; 
	
	raiz1= (-b+discriminante(a,b,c))/(2*a);
	raiz2= (-b-discriminante(a,b,c))/(2*a); 
	
	cout<<endl<<"Las raices de la ecuacion cuadratica son: "<<"X1 = "<<raiz1<<"  "<<"X2 = "<<raiz2<<endl; 
	 	
	return 0; 
}
