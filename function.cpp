#include <iostream>
#include <string>

using namespace std;

void print(string word) {
  cout << word << endl;
}

int summa(int a, int b) {
  int res = a + b;
  cout << res;

  return res;
}

int main() {
  setlocale(LC_ALL, "uk_UA");

  print("Hihihi");

  int result = summa(2,5);
}