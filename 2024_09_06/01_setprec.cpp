#include <iostream>
#include <iomanip>
using namespace std;
int main () {
  const double PI = 3.141592653589793238462;
  cout << setprecision(10) << PI << endl;
  cout << setprecision(20) << PI << endl;
  cout << setprecision(30) << PI << endl;
  cout << setprecision(40) << PI << endl;
}