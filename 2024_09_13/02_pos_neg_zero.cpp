#include <iostream>
using namespace std;

int main () {
  int num = 0;
  cout << "Dame un numero " << endl;
  cin >> num;

  if (num > 0) {
    cout << "Positivo" << endl;
  } else if (num < 0) {
    cout << "Negativo" << endl;
  } else {
    cout << "Cero" << endl;
  }

}