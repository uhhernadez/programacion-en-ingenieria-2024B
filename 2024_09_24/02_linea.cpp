#include <iostream>
using namespace std;

int main () {
  int n; // numero columnas
  cout << "n = ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    if ( i % 2 == 0) {
      cout << '+';
    } else {
      cout << '-';
    }
  } 

  cout << endl;
}