#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<float> nums(10);
  vector<float> inicio(5);
  vector<float> fin(5);

  for (int i = 0; i < nums.size(); i++) {
    cout << "Dame el valor : " << (i+1) << endl;
    cin >> nums[i];
  }

  inicio[0] = nums[0];
  inicio[1] = nums[1];
  inicio[2] = nums[2];
  inicio[3] = nums[3];
  inicio[4] = nums[4];

  fin[0] = nums[5];
  fin[1] = nums[6];
  fin[2] = nums[7];
  fin[3] = nums[8];
  fin[4] = nums[9];

  for (int i = 0; i < inicio.size(); i++) {
    inicio[i] = nums[i]; // 0, 1, 2, 3, 4
  }
  
  for (int k = 0; k < fin.size(); k ++) {
    fin[k] = nums[fin.size() + k]; 
  }
  cout << "Primer arreglo: " << endl; 
  for (int j = 0; j < inicio.size(); j++) {
    cout << inicio[j] << endl;
  }
  cout << "Segundo arreglo: " << endl; 
  for (int j = 0; j < fin.size(); j++) {
    cout << fin[j] << endl;
  }

}
