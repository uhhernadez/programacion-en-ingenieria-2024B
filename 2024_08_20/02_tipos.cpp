#include <iostream>
// Este comando sirve para quitar el std::
using namespace std;

int main () {
  char c; 
  int i;
  float f;
  double d;
  cout << "Dame un caracter " << endl;
  cin >> c;
  cout << "Dame un entero " << endl;
  cin >> i;
  cout << "Dame un flotante " << endl;
  cin >> f;
  cout << "Dame un double " << endl;
  cin >> d;
  cout << "El caracter " << c << " el entero " << i
        << " el flotante " << f << " el double " << d
        << endl;
}