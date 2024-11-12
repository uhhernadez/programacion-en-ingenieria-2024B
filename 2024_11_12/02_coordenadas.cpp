#include <iostream>
#include <cmath>
using namespace std;

float polares2x(float r, float theta) {
  return r * cos (theta);
}

float polares2y(float r, float theta) {
  return r * sin (theta);
}

float leerFloat (string msg) {
  float aux;
  cout << msg << endl;
  cin >> aux;
  return aux;
}

int main () {
  float r, theta;
  float x, y;

  r = leerFloat("Dame el valor del radio: ");
  theta = leerFloat("Dame el valor del angulo");

  x = polares2x(r, theta);
  y = polares2y(r, theta);
  
  cout << "Las coordenas son (x,y) ("<< x << ","
       << y << ")" << endl;

}
