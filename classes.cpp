#include <iostream>
#include <string>

using namespace std;

class Building {
public:
  string type;
  int year;

  void get_info() {
    cout << type << "Year: " << year << endl;
  }
};

int main() {
  setlocale(LC_ALL, "uk_UA");
  Building school;
  school.type = "School";
  school.year = 2020;
}