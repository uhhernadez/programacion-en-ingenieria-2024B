#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector <int> v(10);
  int num;

  cout << "Dame diez valores " << endl;
  for (int i = 0; i < v.size() ; i++) {
    cout << "Dame el valor " << i << endl;
    cin >> v[i];
  }

  cout << "Que numero quieres buscar" << endl;
  cin >> num;
  int existe = 0;
  for (int k : v) {
    if (num == k ) {
      existe = 1;
    }
  }
  if (existe == 1) {
    cout << "El valor : " << num << " esta en el arreglo" <<endl;
  } else {
    cout << "No existe" << endl;
  }

}