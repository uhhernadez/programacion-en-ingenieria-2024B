#include <iostream>
using namespace std;

int main () {
  int segundos1, segundos2;

  cout << "Cantidad 1 ";
  cin >> segundos1;

  cout << "Cantidad 2 ";
  cin >> segundos2;
  
  int suma = segundos1 + segundos2;

  int minutos = suma / 60;
  int segundos = suma % 60;

  cout << "Total "<< minutos << ":";
  if (segundos < 10) {
    cout << "0" << segundos;
  } else {
    cout << segundos ;
  }
  
  if (minutos > 0) {
    cout << " minutos "<< endl;
  } else {
    cout << " segundos "<< endl;
  }
}

