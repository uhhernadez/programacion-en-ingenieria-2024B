#include<iostream>
#include <string>
using namespace std;

string leerCadena (string msg) {
  string aux;
  cout << msg << endl;
  cin >> aux;
  return aux;
}

void mostrarNombre (string nombre,
                    string apellidoPaterno, 
                    string apellidoMaterno) {
  cout << nombre << " "
       << apellidoPaterno << " "
       << apellidoMaterno << endl;
}

int main () {
  string nombre, apellidoPaterno, apellidoMaterno;
  nombre = leerCadena("Dame tu nombre: ");
  apellidoPaterno 
    = leerCadena("Dame tu apellido paterno: ");
  apellidoMaterno 
    = leerCadena("Dame tu apellido: ");
}
