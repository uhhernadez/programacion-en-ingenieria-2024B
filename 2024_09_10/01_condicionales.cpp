#include <iostream>
using namespace std;

int main () {
  int respuesta;

  cout << "Tienes un problema? Escribe '1' para si o 0 para 'No'" << endl;
  cin >> respuesta;
  if (respuesta == 1) {
    cout << "Ignorar el problema" << endl;
    cout << "Se soluciono?" << endl;
    cout << "1 - Si " << endl;
    cout << "0 - No " << endl;
    cin >> respuesta;
    if (respuesta == 0) {
      cout << "Tiene solucion?" << endl;
      cout << "Se soluciono?" << endl;
      cout << "1 - Si " << endl;
      cout << "0 - No " << endl;
      cin >> respuesta;
      if ( respuesta == 1) {
        cout << "Solucionalo ..." << endl;
      } else {
        cout << "No te preocupes" << endl;
      }
    } else {
      cout << "No te preocupes" << endl;
    }
  } else {
    cout << "No te preocupes" << endl;
  }
}
