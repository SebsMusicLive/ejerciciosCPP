#include <iostream>

using namespace std;

int main(){
    
    /* Escribe un programa que lea de la entrada estándar dos números 
    y muestre en la salida estándar su suma, resta, multiplicación y división.*/

    int num1, num2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout<<"Ingresa el numero 1:"; cin>>num1;
    cout<<"Ingresa el numero 2:"; cin>>num2;

    suma = num1+num2;
    resta = num1-num2;
    multiplicacion = num1*num2;
    division = num1/num2;

    cout<<"La suma de los numeros: "<<num1<< " + " <<num2<<" es: "<<suma<<endl;
    cout<<"La resta de los numeros: "<<num1<< " - " <<num2<<" es: "<<resta<<endl;
    cout<<"La multiplicacion de los numeros: "<<num1<< " * " <<num2<<" es: "<<multiplicacion<<endl;
    cout<<"La division de los numeros: "<<num1<< " / " <<num2<<" es: "<<division;


    return 0;
    
}