#include <iostream>
#include <cmath>
using namespace std;

int main () {
  float calificacion = 9.45;
  // floor redondea hacia abajo
  // round redondea al entero más cercano
  // ceil redondea al entero más alto
  switch ((int)ceil(calificacion)) {
    case 10: cout << "De puro ChatGTP" << endl; break;
    case 9: cout << "Crack" << endl; break;
    case 8: cout << "Buen trabajo" << endl; break;
    case 7: cout << "De puro milagro, de pansaso" << endl; break;
    case 6: cout << "Echale ganas" << endl; break;
    case 5: cout << "Recursar es el camino" << endl; break;
    case 4: cout << "Nos vemos en el extra" << endl; break;
    case 3: cout << "Por ignorar el problema" << endl; break; 
    case 2: cout << "Vender pollos es una opcion" << endl; break;
    case 1: cout << "Mejor nadota, mejor gestion" << endl; break; 
    case 0: cout << "Quien eres" << endl; break;
  }
}









