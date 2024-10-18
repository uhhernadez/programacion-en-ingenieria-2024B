#include <iostream>
using namespace std;

int main () {
  float a, b;
  char operacion;
  cout << "Dime que operacion quieres realizar :" << endl;
  cout << "+ : suma\n- : resta\n/ : división\n * : multiplicacion\n";
  cin >> operacion;
  cout << "Introduce los valores de a y b" << endl;
  cin >> a >> b;

  switch (operacion) {
    case '+': cout << "Suma :" << a + b << endl; break;
    case '-': cout << "Resta :" << a - b << endl; break;
    case '/': cout << "Division :" << a / b << endl; break;
    case '*': cout << "Multiplicacion : " << a * b << endl; break;
    default: cout << "Operacion no valida" << endl; break;
  }
}




