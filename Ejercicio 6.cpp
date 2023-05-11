#include <iostream>

using namespace std;

int main(){
    /*
    Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
        Edad: dato de tipo entero.
        Sexo: dato de tipo carácter.
        Altura en metros: dato de tipo real.
    Tras leer los datos, el programa debe mostrarlos en la salida estándar.
    */

   int edad;
   char sexo[10];
   float altura;

   cout<<"Ingresa la edad: ";cin>>edad;
   cout<<"Ingresa el sexo: ";cin>>sexo;
   cout<<"Ingresar la altura: "; cin>>altura;

   cout<<"La edad ingresada es: "<<edad<<endl;
   cout<<"El sexo ingresado es: "<<sexo<<endl;
   cout<<"La altura ingresada es: "<<altura<<endl;
   
   return 0;
}