/*Realizar un programa que reciba un número entero y determine si es un número par o impar*/

#include <iostream>

using namespace std;

int main(){
    int numero;
    cout<<"Ingresa un numero entero ";cin>>numero;
    if(numero==0){
        cout<<"El numero es igiual a "<<numero;
    }else if(numero%2==0){
        cout<<"El numero "<<numero<<" es par";
    }else{
        cout<<"El numero "<<numero<<" es impar";
    }
    return 0;
}