#include <iostream>
using namespace std;

int main () {
  int a = 8, b = 8, c = 8;

  if ( a == b && b == c ) {
      cout << "Los numeros son iguales" << endl;
  } else if ( a >= b && a >= c) {
      cout << "El maximo es: " << a << endl;
  } else if ( b >= a && b >= c) {
      cout << "El maximo es: " << b << endl; 
  } else if ( c >= a && c >= b) {
      cout << "El maximo es: " << c << endl;
  }
} 
