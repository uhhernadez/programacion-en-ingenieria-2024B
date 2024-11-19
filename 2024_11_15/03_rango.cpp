#include <iostream>
using namespace std;

int main () {
  int numero;
  cin >> numero;
  
  if (numero >= 10) {
    if (numero <= 20) {
      cout << "Esta en el rango" << endl;
    }
  }
  
  if (numero >= 10 && numero <= 20) {
    cout << "Esta en el rango" << endl; 
  }
  cout << ((numero >= 10 && numero <= 20)? "Si esta":"No esta");
}
