#include <iostream>

using namespace std;

int main(){
    /*Escribe un programa que lea de la entrada estándar el precio de un producto 
    y muestre en la salida estándar el precio del producto al aplicarle el IVA.*/

    int precio, productoConIva;
    cout<<"Ingresa el valor del producto: "; cin>>precio;

    productoConIva = precio+(precio*0.19);

    cout<<"El precio del producto con IVA es de: "<<productoConIva;

}