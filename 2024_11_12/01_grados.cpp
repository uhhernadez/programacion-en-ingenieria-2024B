#include <iostream>
using namespace std;

float convertirGrados(float c) {
  return (9.0/5.0) * c + 32;
}

float leerFloat (string msg) {
  float aux;
  cout << msg << endl;
  cin >> aux;
  return aux;
}

int main () {
  float celsius, fahrenheit;
  celsius = leerFloat("Dame los grados");  
  fahrenheit = convertirGrados(celsius);
  cout<< celsius <<" grados celsius es igual a " 
      << fahrenheit << " grados fahrenheit" << endl;
}
