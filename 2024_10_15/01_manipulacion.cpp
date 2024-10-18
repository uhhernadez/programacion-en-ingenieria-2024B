#include <iostream>
#include <vector>
using namespace std;

int main () {
  int v[3] = { 3, 2, 1};
  v[0] = 1;
  v[1] = 2;
  v[10] = 3;
  cout << v[0] << endl;
  cout << v[1] << endl;
  cout << v[100] << endl;
}
