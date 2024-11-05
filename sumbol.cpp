#include <iostream>
#include <string>

using namespace std;

int main() {
  setlocale(LC_ALL, "uk_UA");
  char s[2]= { 'H', 'I' };
  for(int i = 0; i < 2; i++)
    cout << "Element: " << s[i];

  string words = "hello !!!";
  words[0] = 'H';
  cout << words;
}