#include <iostream> 
#include <vector>
using namespace std;

vector<float> leerValores() {
  vector<float> valores(10); 
  for (int i = 0; i < valores.size(); i++) {
    cout << "Dame el valor :" << (i+1) << endl;
    cin >> valores[i];
  }
  return valores;
}

void mostrarValores(vector<float> v) {
  for (int i = 0 ; i < v.size(); i++) {
    cout << i << " = " << v[i] << endl;
  }
}

float promediarValores(vector<float> v) {
  float suma = 0;
  for (int i = 0; i < v.size(); i++) {
    suma += v[i];
  }
  return suma/v.size();
}

int main () {
  vector<float> nums; 

  nums = leerValores();
  mostrarValores(nums);
  cout << "El promedio es: " << promediarValores(nums) << endl;
  return 0;
}




