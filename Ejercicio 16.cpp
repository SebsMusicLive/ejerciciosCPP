#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, x1 = 0, x2 = 0, pot = 0, dent = 0;
    cout<<"Teniendo en cuenta que ax^2+bx+c"<<endl;

    cout<<"Ingresa el valor de a: ";cin>>a;
    cout<<"Ingresa el valor de b: ";cin>>b;
    cout<<"Ingresa el valor de c: ";cin>>c;

    pot = pow(b,2);
    dent = pot-(4*a*c);
    dent /= (2*a);

    x1 = (-b-(sqrt(dent)));
    x2 = (-b+(sqrt(dent)));
    cout.precision(2);

    cout<<"El valor de x1 es de: "<<x1<<endl;
    cout<<"El valor de x2 es de: "<<x2<<endl;

    return 0;
}