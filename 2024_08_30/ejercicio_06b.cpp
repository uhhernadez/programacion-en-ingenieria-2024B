#include <iostream>
using namespace std;
int main() { 
  float valor,cuadrado,y;
  
  cout << "ingresa el valor de x para la ecuación cuadratica: y=3x^2-2x+9" << endl;
  cin>>valor;
  cuadrado=valor*valor;  
  y=3*cuadrado-2*valor+9;
  cout<<"el resultado de la ecuación cuadratica es: "<<y<<endl;
}