/*
Hacer un programa que simule un cajero automático con un saldo inicial de 1000 dolares
*/

#include <iostream>

using namespace std;

int main()
{
    int saldoInicial = 1000, op, extra, saldo = 0, retiro;
    cout << "\t Bienvenido a su cajero virtual " << endl;
    cout << "1. ingresar dinero en cuenta " << endl;
    cout << "2. Retirar dinero de cuenta " << endl;
    cout << "3. Salir " << endl;
    cout << "Opcion: ";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Ingresa la cantidad de dinero a ingresar: ";
        cin >> extra;
        saldo = saldoInicial + extra;
        cout << "Tu saldo es " << saldo;
        break;
    case 2:
        cout << "Ingresa la cantidad de dinero a retirar: ";
        cin >> retiro;
        if (retiro > saldoInicial)
        {
            cout << "No tienes esa cantidad de dinero ";
        }
        else
        {
            saldo = saldoInicial - retiro;
            cout << "Tu saldo es " << saldo;
        }

        break;
    case 3:
        break;
    }
    return 0;
}