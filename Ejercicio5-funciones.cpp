/*
. Función calcularRaices: Amplía el ejercicio anterior definiendo una función void llamada
calcularRaices que reciba los coeficientes de la ecuación (a, b, c) por valor y las variables donde
se almacenarán las raíces por referencia. Además, incluye una variable por referencia que indique si
las raíces son reales o complejas. La función debe calcular las raíces utilizando la fórmula general y
actualizar las variables correspondientes.
*/

#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(int a, int b, int c, double &raiz1, double &raiz2, bool &solucionesReales) {
    int discriminante = b * b - 4 * a * c;
    
	if(discriminante<0){
		solucionesReales= false; 
	}
	else{
	 solucionesReales= true; 
    raiz1 = (-b + sqrt(discriminante)) / (2 * a);
    raiz2 = (-b - sqrt(discriminante)) / (2 * a);
    
    }
}

int main() {
    int a, b, c;
    double raiz1, raiz2;
    bool solucionesReales;
    char letra; 
     
    cout << "Digite el valor de a: ";
    cin >> a;
    
    if(a==letra){
    	cout<<endl<<"El dato ingresado no es valido. "<<endl;
    	cout<<"----------ERROR-----------";
    	
    	return 1; 
    }
    
    cout << "Digite el valor de b: ";
    cin >> b;
    
     if(b==letra){
    	cout<<endl<<"El dato ingresado no es valido. "<<endl;
    	cout<<"----------ERROR-----------";
    	
    	return 2; 
    }
    
    cout << "Digite el valor de c: ";
    cin >> c;
    
     if(c==letra){
    	cout<<endl<<"El dato ingresado no es valido. "<<endl;
    	cout<<"----------ERROR-----------";
    	
    	return 3; 
    }
    
    if (a == 0) {
        cout << endl << "Los datos ingresados no representan una ecuacion cuadratica.";
        return 4;
    }

    calcularRaices(a, b, c, raiz1, raiz2, solucionesReales);
    
    if(solucionesReales){
        cout<< endl << "Las raices de la ecuacion cuadratica son: X1 = " << raiz1 << "  X2 = " << raiz2 << endl;
    }
    else{
    	cout<< endl << "Tiene raices complejas no reales. "; 
    }
	
	
	
    return 0;
}

