#include <iostream>

using namespace std;

int main(){
    // Escribe la siguiente expresión como expresión en C++: (a/b) + 1

    float a,b,resultado=0;
    cout<<"Digite el valor de a:  ";cin>>a;
    cout<<"Digite el valor de b:  ";cin>>b;

    resultado = (a/b)+1;
    cout.precision(2);
    cout<<"El resultado de la operacion es: "<<resultado<<endl;
    return 0;
}