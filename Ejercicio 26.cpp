/*Escriba un programa que reciba 3 numeros, después debe de leer un cuarto número e indicar si coincide con los anteriores*/

#include<iostream>

using namespace std;

int main(){
    int n1, n2, n3, n4;
    cout<<"Ingresa 3 numeros enteros ";cin>>n1>>n2>>n3;
    cout<<"Ingresa un numero entero ";
    cin>>n4;

    if(n4 == n1){
        cout<<"El numero ingresado "<<n4<<" coincide con el numero "<<n1<<endl;
    }else if(n4 == n2){
        cout<<"El numero ingresado "<<n4<<" coincide con el numero "<<n2<<endl;
    }else if(n4 == n3){
        cout<<"El numero ingresado "<<n4<<" coincide con el numero "<<n3<<endl;
    }else{
        cout<<"El numero ingresado "<<n4<<" no coincide con niguno de los numeros ingresados anteriormente";
    }
    return 0;
}