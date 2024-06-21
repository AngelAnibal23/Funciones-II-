/*
Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una
ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para
calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.
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
