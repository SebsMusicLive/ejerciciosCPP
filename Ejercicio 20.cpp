/*Escribir un programa que determine dados tres numeros cual es el mayor*/

#include <iostream>

using namespace std;

int main(){

    int n1,n2,n3;
    cout<<"Ingresa 3 numeros ";
    cin>>n1>>n2>>n3;

    if(n1>n2 && n1>n3){
        cout<<"El numero mayor es "<<n1<<endl;
    }else if(n2>n1 && n2>n3){
        cout<<"El numero mayor es "<<n2<<endl;
    }else{
        cout<<"El numero mayor es "<<n3<<endl;
    }

    return 0;
}