#include <iostream>

using namespace std;

int main(){
    float practica, teorica, participacion, notaFinal = 0;

    cout<<"Ingresa la nota practica ";cin>>practica;
    cout<<"Ingresa la nota teorica ";cin>>teorica;
    cout<<"Ingresa la nota de participacion ";cin>>participacion;

    practica*=0.3;
    teorica*=0.6;
    participacion*=0.10;

    notaFinal = practica + teorica + participacion;

    cout<<"La nota final es: "<<notaFinal<<endl;

    return 0;
}