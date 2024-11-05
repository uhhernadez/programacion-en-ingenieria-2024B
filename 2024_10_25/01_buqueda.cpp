#include <iostream>
#include <vector> 
using namespace std;

int main () {
  vector<int> numeros(10);
  int positivos = 0;
  int negativos = 0;
  int pares = 0;
  int impares = 0;
  int ceros = 0;

  for (int i = 0; i < numeros.size(); i++) {
    cout << "Dame el valor " << (i+1) << endl;
    cin >> numeros[i];
  }
  // positivos
  for (int i = 0 ; i < numeros.size(); i++) {
    if (numeros[i] >= 0 ) {
      positivos = positivos + 1;
    }
    if (numeros[i] < 0) {
      negativos = negativos + 1;
    }
    if (numeros[i] % 2 == 0) {
      pares = pares + 1;
    }
    if (!(numeros[i] % 2 == 0)) {
      impares = impares + 1;
    }
    if (numeros[i] == 0) {
      ceros = ceros + 1;
    }
  }

  cout << "Los resultados son: " << endl;
  cout << "Positivos : " << positivos << endl;
  cout << "Negativos : " << negativos << endl;
  cout << "Pares : " << pares << endl;
  cout << "Impares : " << impares << endl;
  cout << "Ceros : " << ceros << endl;

  

}

