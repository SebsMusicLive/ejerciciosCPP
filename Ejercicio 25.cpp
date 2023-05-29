/*Escriba un programa que solicite una edad (un entero) e indique en la salida estándar si la edad introducida se encuentra en el rango
de (18-25)*/

#include <iostream>

using namespace std;

int main(){
    int edad;
    cout<<"Ingresa tu edad ";cin>>edad;
    if(edad>=18 && edad<=25){
        cout<<"Su edad esta en el rango de 18 a 25";
    }else{
        cout<<"Su edad no esta en el rango ";
    }
    return 0;
}

