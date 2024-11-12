#include <iostream>
using namespace std;

void mostrarTablaMultiplicar(float num) {
  for (float i = 1; i <= 10; i++ ) {
    cout << i << " x " << num << " = " << i * num << endl;
  }
}

float leerFlotante (string msg) {
  float aux;
  cout << msg << endl;
  cin >> aux;
  return aux;
}

int main () {
  float n;
  n = leerFlotante("Dame un valor a calcular");
  mostrarTablaMultiplicar(n);
}

