#include <iostream>
using namespace std;

int main () {
  char vocal;
  cin >> vocal;
  switch (vocal) {
    case 'a': 
    case 'e': 
    case 'i': 
    case 'o': 
    case 'u':
    case 'A': 
    case 'E': 
    case 'I': 
    case 'O': 
    case 'U': cout << "Es una vocal" << endl; break;
    default : cout << "No es una vocal" << endl; break;
  }

}
