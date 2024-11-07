#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  setlocale(LC_ALL, "uk_UA");

  ofstream file("test.txt", ios_base::out);
  if(file.is_open()) {
    file << "Something!";
    file.close();
  }

  ifstream file1("test2.txt");
  if(file1.is_open()) {
    // string temp;
    // file1 >> temp;

    char temp[100];
    file.getline(temp, 100);
    cout << temp << endl;
    file.close();
  }

  return 0;
}