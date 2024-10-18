#include <iostream>
using namespace std;
enum Semana {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};

int main () {
  Semana dia = Martes;
  switch (dia) {
    case Domingo: cout << "Domingo" << endl; break;
    case Sabado: cout << "Sabado" << endl; break;
    case Lunes: cout << "Lunes" << endl; break;
    case Viernes: cout << "Viernes" << endl; break;
    case Martes: cout << "Martes" << endl; break;
    case Jueves: cout << "Jueves" << endl; break;
    case Miercoles: cout << "Miercoles" << endl; break;
    default : cout << "No son dias, juebebes, sabadrink, pomingo, miercolitros, etc" << endl; break;
  }

}