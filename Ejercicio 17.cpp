/*
    La sentencia if

    if(sentencia){
        instruccion 1;
    }else{
        instruccion 2;
    }

*/

#include<iostream>

using namespace std;

int main(){
    int numero,  dato = 5;

    cout<<"Ingresa un numero ";cin>>numero;

    if(numero >= dato){
        cout<<"El numero es mayor o igual a 5";
    }else{
        cout<<"El numero es menor que 5";
    }

    return 0;
}