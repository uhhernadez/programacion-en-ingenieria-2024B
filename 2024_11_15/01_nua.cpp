#include <iostream>
#include <string>
using namespace std;

int main () {
  string nua;
  int a, b, c, d, e, f;
  
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;
  cin >> f;

  cout << "La suma es: " << a +b + c + d + e + f <<endl;
  cout << "Dame el nua :";
  cin >> nua;
  cout << "La suma es ";
  int aux = 0;
  aux += nua[0] - '0';
  aux += nua[1] - '0';
  aux += nua[2] - '0';
  aux += nua[3] - '0';
  aux += nua[4] - '0';
  aux += nua[5] - '0';
  cout << aux;

/*
  while (nua > 0) { 
    sumanua += nua % 10; 
    nua /= 10; 
  }  
*/
}
