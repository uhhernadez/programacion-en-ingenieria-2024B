#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> a(10);
  vector<int> b(10);

  for (int i = 0; i < a.size(); i++) {
    cout << "Dame el valor : " << i+1 << endl;
    cin >> a[i];
  }
  
  for (int i = 0, j = b.size() -1 ; i < a.size(); i++, j--) {
    b[j] = a[i];   
  }

  for (int i = 0; i < b.size(); i++) {
    int j = b.size() - 1 - i;
    b[j] = a[i];
  }

  for (int i = 0 ; i < b.size(); i++) {
    cout << b[i] << endl;
  }
}
