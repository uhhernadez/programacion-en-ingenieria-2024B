#include <iostream>
using namespace std;
enum class Semana : int {Lunes = 1, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};

int main () {
  int dia;
  cout << "Dame el día de la semana en numero (0 a 6)" << endl;
  cin >> dia;
  switch ((Semana)dia) {
    case Semana::Domingo: cout << "Domingo" << endl; break;
    case Semana::Sabado: cout << "Sabado" << endl; break;
    case Semana::Lunes: cout << "Lunes" << endl; break;
    case Semana::Viernes: cout << "Viernes" << endl; break;
    case Semana::Martes: cout << "Martes" << endl; break;
    case Semana::Jueves: cout << "Jueves" << endl; break;
    case Semana::Miercoles: cout << "Miercoles" << endl; break;
    default : cout << "No son dias, juebebes, sabadrink, pomingo, miercolitros, etc" << endl; break;
  }

}