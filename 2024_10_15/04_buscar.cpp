#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int v[10],valor;
    cout<<"Ingrese 10 números: ";
    for (int i=0; i<10; i++)
    {
        cout<<"Ingrese el valor " <<i<<": ";
        cin>>v[i];
    }
    cout<<"Ingrese un número a buscar: ";
    cin>>valor;

    if (valor==v[1] || valor==v[2]||valor==v[3]||valor==v[4]||valor==v[5]||valor==v[6]||valor==v[7]||valor==v[8]||valor==v[9]||valor==v[0])
    {
        cout<<"El valor existe";
    }
    else
    {
        cout<<"El valor NO existe";
    }
}