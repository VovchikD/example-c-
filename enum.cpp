#include <iostream>
#include <string>

using namespace std;

enum Options {
  open,
  close,
  wait,
  del
};

struct File {
  float weight;
  string name;
  Options options;
};

int main() {
  setlocale(LC_ALL, "uk_UA");
  File my_file;
  my_file.weight = 23.2;
  my_file.name = "Text.txt";
  my_file.options = Options::open;
}