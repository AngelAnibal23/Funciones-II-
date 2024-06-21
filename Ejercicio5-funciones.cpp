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

void calcularRaices(int a, int b, int c, double &raiz1, double &raiz2) {
    int discriminante = b * b - 4 * a * c;

    raiz1 = (-b + sqrt(discriminante)) / (2 * a);
    raiz2 = (-b - sqrt(discriminante)) / (2 * a);
    
}

int main() {
    int a, b, c;
    double raiz1, raiz2;
    
    cout << "Digite el valor de a: ";
    cin >> a;
    cout << "Digite el valor de b: ";
    cin >> b;
    cout << "Digite el valor de c: ";
    cin >> c;

    if (a == 0) {
        cout << endl << "Los datos ingresados no representan una ecuacion cuadratica.";
        return 1;
    }

    calcularRaices(a, b, c, raiz1, raiz2);

	cout << endl << "Las raices de la ecuación cuadratica son: X1 = " << raiz1 << "  X2 = " << raiz2 << endl;
    

    return 0;
}

