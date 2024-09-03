#include <iostream>
using namespace std;

int main () {
  int a = 10, b = 20;
  bool resultado = a != b;
  if (resultado) {
    cout << "Cuando la condicion es verdadera" << endl;
  } else {
    cout << "Cuando la condicion es falsa" << endl;
  }
}