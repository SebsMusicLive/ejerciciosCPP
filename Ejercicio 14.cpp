#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float cateto1,cateto2,hipotenusa=0;
    cout<<"Ingresa el valor del cateto 1: ";cin>>cateto1;
    cout<<"Ingresa el valor del cateto 2: ";cin>>cateto2;

    hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
    cout.precision(2);
    cout<<"La hipotenusa del triangulo rectangulo es: "<<hipotenusa<<endl;
    
    return 0;
}