/*
    La sentencia do while
    
    do{
        conjunto de instrucciones;
    }while(expresion logica)
*/
#include<iostream>

using namespace std;

int main(){
    int i = 10;
    do
    {
        cout<<i<<endl;
        i--;
    } while (i>=1);
    
    return 0;
}