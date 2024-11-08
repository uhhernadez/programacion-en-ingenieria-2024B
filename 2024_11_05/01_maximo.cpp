#include <iostream>
#include <vector>
using namespace std;

float encontrarMaximo(vector<float> v) {
  float max = v[0];
  
  for (int i = 0; i < v.size(); i++) {
    if (max < v[i]) {
      max = v[i];
    }
  }
  return max;
}

float encontrarMinimo(vector<float> v) {
  float min = v[0];
  
  for (int i = 0; i < v.size(); i++) {
    if (min > v[i]) {
      min = v[i];
    }
  }
  return min;
}

bool buscarValor(vector<float> v, float valor) {
  for (int i = 0; i < v.size(); i++) {
    if (valor == v[i]) {
      return true;
    }
  }
  return false;
}


int main () {
  vector<float> nums{1,2,3,4,5,100,6,7,8,9,0};
  float maximo, minimo, valor = 1;
  
  maximo = encontrarMaximo(nums);
  minimo = encontrarMinimo(nums);

  cout << "El maximo es: " << maximo << endl; 
  cout << "El minimo es: " << minimo << endl; 
  
  if (buscarValor(nums, valor)) {
    cout << "Si se encuentra " << valor << endl;
  } else {
    cout << "No se encuentra " << valor << endl;
  }

  string mensaje = (buscarValor(nums,valor))? "Si existe": "No existe";
  cout << mensaje << " el valor " << valor << endl;
}
