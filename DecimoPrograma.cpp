#include <iostream>

using namespace std;

int main()
{
    // Escribe la siguiente expresión como expresión en C++: a+(b/(c-d))

    float a, b, c, d, resultado = 0;
    cout<<"Ingresa el valor de a";cin>>a;
    cout<<"Ingresa el valor de b";cin>>b;
    cout<<"Ingresa el valor de a";cin>>c;
    cout<<"Ingresa el valor de d";cin>>d;
    
    resultado = a+(b/(c-d));
    cout.precision(2);
    cout<<"El resultado de la expresion a+(b/(c-d)) es: "<<resultado<<endl;

    return 0;
}