#include <iostream>
#include <string>
using namespace std;

int main () {
  string nombres [] = {
        "Monkey D. Luffy",
        "Roronoa Zoro",	
        "Nami",
        "Usopp",
        "Vinsmoke Sanji", 
        "Tony Tony Chopper"	
  };

  int edades [] = {
    19,
    21,
    20,
    19,
    21,
    17
  };

  cout << "El personaje " << nombres[1] << " tiene la edad de " << edades[1] << endl;
}


