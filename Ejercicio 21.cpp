/*Comprobar si un numero dado por el usuario es negativo*/
#include <iostream>

using namespace std;

int main(){
    int numero;
    cout<<"Ingresa un numero ";cin>>numero;
    if(numero==0){
        cout<<"El numero es "<<numero;
    }
    else if(numero<0){
        cout<<"El numero "<<numero<<" es negativo";
    }else{
        cout<<"El numero "<<numero<<" es positivo";
    }
    return 0;
}