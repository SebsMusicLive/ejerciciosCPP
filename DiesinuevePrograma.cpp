/*Escriba un programa que lea dos numeros y determine cual de ellos es el mayor*/

#include <iostream>

using namespace std;

int main(){
    int n1,n2;
    cout<<"Ingresa dos numeros ";
    cin>>n1>>n2;

    if(n1==n2){
        cout<<"Ambos numeros son iguales"<<endl;
    }
    else if(n1>n2){
        cout<<"El mayor es: "<<n1<<endl;
    }else{
        cout<<"El mayor es: "<<n2<<endl;
    }
    return 0;
}