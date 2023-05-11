#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float x,y,f;
    cout<<"Ingresa el valor de x: ";cin>>x;
    cout<<"Ingresa el valor de y: ";cin>>y;

    f = sqrt(x)/(pow(y,2)-1);

    cout<<"El resultado de la funcion es de: "<<f<<endl;
    return 0;
}