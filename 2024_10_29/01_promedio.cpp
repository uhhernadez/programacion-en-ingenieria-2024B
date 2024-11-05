#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<float> nums(10);
  
  for (int i = 0; i < nums.size(); i++) {
    cout << "Dame el valor :" << (i+1) << endl;
    cin >> nums[i];
  }

  float promedio = (nums[0] + nums[1] + nums[2] + nums[3] +
                    nums[4] + nums[5] + nums[6] + nums[7] +
                    nums[8] + nums[9]) / 10.0;
  cout << "El promedio es: " << promedio << endl;

  float suma = 0.0;

  for (int i = 0; i < nums.size(); i++) {
    suma = suma + nums[i];
  }

  promedio = suma / nums.size();
  cout << "El promedio es: " << promedio << endl;
}
