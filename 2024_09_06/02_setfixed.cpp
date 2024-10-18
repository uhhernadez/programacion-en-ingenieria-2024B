#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  const double PI = 3.14;
  cout << fixed;
  cout << setprecision(2) << PI << endl;
  cout << setprecision(3) << PI << endl;
  cout << setprecision(4) << PI << endl;
  cout << setprecision(5) << PI << endl;
}