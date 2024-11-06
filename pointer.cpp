#include <iostream>

using namespace std;

void minimal(int* arr, int len) {
  int min = *arr;
  for (int i = 0; i < len; i++) {
    if (min > *(arr + i))
    (min > *(arr + i));
  }
  cout  << min << endl;
}

int main() {
  setlocale(LC_ALL, "uk_UA");
  int nums[] = { 5, 5, 3, 4, -2 };
  minimal(nums, 5);
}