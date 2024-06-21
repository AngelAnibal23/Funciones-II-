#include <iostream>
#include <cmath>
using namespace std;

float hipotenusafuncion(int x, int y){
    float calculo;
    
    calculo= sqrt(pow(x,2)+pow(y,2));
    
    return calculo;
    }


int main(){
    int lado1, lado2, hipotenusa;
    
    cout<<"Digite el valor de un cateto: ";
    cin>>lado1;
    cout<<"Digiite el valor del otro cateto: ";
    cin>>lado2;
    
    hipotenusa= hipotenusafuncion(lado1,lado2);
    
    cout<<endl<<"El valor de la hipotenusa es: "<<hipotenusa<<endl;
        
        
       return 0;
    }
