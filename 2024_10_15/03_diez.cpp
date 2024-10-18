#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector <int> v(10);
  int vec[10];
  cout << "Dame diez valores " << endl;
  for (int i = 0; i < 10; i++) {
    cout << "Dame el valor " << i << endl;
    cin >> v[i];
  }
  for (int k : v) {
    cout << k << ", ";
  }
}