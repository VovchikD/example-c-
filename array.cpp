#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "uk_UA");

  int nums[3];
  nums[0] = 2;
  nums[1] = 4;
  nums[2] = 5;

  cout << "Element: " << nums[2] << endl;
}