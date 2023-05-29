/*
Hacer un menú que considere las siguientes opciones
    Caso 1: Cubo de número par
    Caso 2: Numero par o impar
    Caso 3: Salir
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numero, op;
    double elevado =0;

    cout << "\t Bienvenido a tu calculadora virtual " << endl;

    cout << "1. Cubo de un numero" << endl;
    cout << "2. Numero par o impar " << endl;
    cout << "3. Salir " << endl;
    cout << "Opcion: ";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Ingresa un numero" << endl;
        cin >> numero;
        elevado = pow(numero, 3);
        cout << "El cubo de " << numero << " es: " << elevado;
        break;
    case 2:
        cout << "Ingresa un numero" << endl;
        cin >> numero;
        if (numero % 2 == 0)
        {
            cout << "El numero que ingresaste es par" << endl;
        }
        else
        {
            cout << "El numero que ingresaste es impar" << endl;
        }
        break;
    case 3:
        break;
    }
    return 0;
}