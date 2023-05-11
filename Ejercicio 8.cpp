#include<iostream>

using namespace std;

int main(){
    //Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)
    float num1, num2, num3, num4;
    float resultado=0.0;

    cout<<"Ingresa un numero: ";cin>>num1;
    cout<<"Ingresa un numero: ";cin>>num2;
    cout<<"Ingresa un numero: ";cin>>num3;
    cout<<"Ingresa un numero: ";cin>>num4;

    resultado=(num1+num2)/(num3+num4);

    cout<<"El resultado de la expresion es: "<<resultado;

    return 0;
}