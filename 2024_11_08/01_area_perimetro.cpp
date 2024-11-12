#include <iostream>
#include <cmath>
using namespace std;

float calcularPetrimetro (float r) {
  return M_PI * 2 * r;
}

float calcularArea (float r) {
  return M_PI * pow(r,2);
  //return M_PI * r * r;
}

float leerValor () {
  float radio;
  cout << "Dame el valor del radio" << endl;
  cin >>radio;
  return radio;

}
int main () {
  float radio, perimetro, area;
  radio = leerValor();
  perimetro = calcularPetrimetro(radio);
  area = calcularArea(radio);
  cout << "El perimetro es : " << perimetro << endl;
  cout << "El area es : " << area << endl;
}










