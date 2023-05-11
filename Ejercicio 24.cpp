/*Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula,
es una vocal mayuscula o no es una vocal*/
#include<iostream>

using namespace std;

int main(){
    char letra;
    cout<<"Ingresa un caracter "; cin>>letra;
    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"El caracter es una vocal minuscula";
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<"El caracter es una vocal mayuscula";
        break;
    default:
        cout<<"El caracter no es una vocal";
        break;
    }
    return 0;
}