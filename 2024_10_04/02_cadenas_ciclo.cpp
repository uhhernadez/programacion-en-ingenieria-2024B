#include <iostream>
#include <string>
using namespace std;

int main () {
  string name = "Arcadio y Lucio";
  cout << "Size: " << name.size() << endl;
  for (int k = 0; k < name.size(); k++) {
    cout << name [k] << endl;
  }
}