#include <iostream>
using namespace std;

int main () {
  float n = 0;
  cout << "Tabla de multiplicar del : " ;
  cin >> n;
  for (int i = 1; i < 11; i++) {
    cout << n << " x " << i << " = " << n * i << endl;
  }
}