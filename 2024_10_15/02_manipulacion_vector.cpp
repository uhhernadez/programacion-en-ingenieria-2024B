#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector <int> v{89,23,98,9, 323, 23, 233, 89};
  for (int k = 0; k < v.size() ; k++) {
    cout << v[k] << ", ";
  }
}