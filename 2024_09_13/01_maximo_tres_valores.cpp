#include <iostream>
using namespace std;

int main () {
  int a = 1, b = 8, c = 8;

  if ( a > b ) {
    if ( a > c) {
      cout << "El maximo es: " << a << endl;
    }
  }

  if ( b > a) {
    if ( b > c) {
      cout << "El maximo es: " << b << endl; 
    }
  }

  if ( c > a ) {
    if ( c > b) {
      cout << "El maximo es: " << c << endl;
    }
  }

  if ( a == b ) {
    if ( b == c ) {
      cout << "Los numeros son iguales" << endl;
    }
  }

} 
