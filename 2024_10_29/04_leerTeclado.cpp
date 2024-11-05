#include <iostream>
using namespace std;

int leerEntero () {
  int aux;
  cout << "Dame un valor "<< endl;
  cin >> aux;
  return aux;
}

int leerEntero (string msg) {
  int aux;
  cout << msg << endl;
  cin >> aux;
  return aux;
}

int sumarEntero(int a, int b) {
  return a + b;
}

int sumarEnteros(int x, int y, int z) {
  return x + y + z;
}

int promediarEnteros (int i, int j, int k) {
  return (i + j + k ) / 3.0;
}


int main () {
  int a, b, c ;

  a = leerEntero("Dame el valor de a: ");
  b = leerEntero("Dame el valor de b: ");
  c = leerEntero("Dame el valor de c: ");
  cout << a << " " << b << " " << c << endl;
  cout << "La suma de a + b es: " << sumarEntero(a, b) << endl;
  cout << "La suma de los tres valores es: " << sumarEnteros(a, b, c) << endl;
  cout << "El primedio es: " << promediarEnteros(a, b, c) << endl;
}
















