/*Escriba un programa que lea de la entrada un caracter e indique en la salida estandar si el caracter es una vocal minuscula o no*/
#include<iostream>

using namespace std;

int main(){
    char letra;
    cout<<"Digite un caracter ";cin>>letra;
    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"El caracter es una vocal minuscula";
        break;
    default: 
        cout<<"El caracter no es una vocal minuscula";
        break;
    }
    return 0;
}