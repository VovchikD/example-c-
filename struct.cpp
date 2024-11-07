#include <iostream>
#include <string>

using namespace std;

struct Tree {
  string name;
  int age;
  bool is_alive;
  float hight;
};

int main() {
  setlocale(LC_ALL, "uk_UA");

  Tree dub;
  dub.name = "Дуб";
  dub.age = 10;
  dub.is_alive = true;
  dub.hight = 4.52f;

  cout << dub.name << "Hight: " << dub.hight << "And age: " << dub.age << endl;

  Tree yalinka;
  yalinka.name = "Сосна";
  yalinka.age = 40;
  yalinka.is_alive = true;
  yalinka.hight = 7.3f;
}