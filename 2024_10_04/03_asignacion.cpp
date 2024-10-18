#include <iostream>
#include <vector>
using namespace std;

int main () {
  float valores[] = {9, 0, 1, 3, -3.14};
  float v[3] = {1.1, 2.2, 3.3};
  vector<float> vv{8.3, 4.5, 32.9};
  cout << valores[3] << endl;
  for (int i = 0; i < vv.size(); i++) {
    cout << vv[i] << " ";
  }
}