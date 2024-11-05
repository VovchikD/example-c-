#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "uk_UA");

  int* nums = new int[3] { 6, 7, 9 };
  nums[0] = 2;

  cout << "Element: " << nums[2] << endl;

  delete[] nums;

  cout << "Element: " << nums[1] << endl;
}