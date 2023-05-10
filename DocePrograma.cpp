#include<iostream>

using namespace std;

int main(){
    float alumno1, alumno2, alumno3, alumno4, media = 0;

    cout<<"Ingresa la definitiva del primer almuno ";cin>>alumno1;
    cout<<"Ingresa la definitiva del segundo alumno ";cin>>alumno2;
    cout<<"Ingresa la definitiva del tercer alumno ";cin>>alumno3;
    cout<<"Ingresa la definitiva del cuarto alumno ";cin>>alumno4;

    media = (alumno1 + alumno2 + alumno3 + alumno4)/4;

    cout<<"La media de la definitiva de los alumnos es: "<<media;

    return 0;
}