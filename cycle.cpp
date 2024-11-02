#include <iostream>

using namespace std;

int main() {
  srand(time(NULL));
  setlocale(LC_ALL, "uk_UA");

  int rand_num = 1 + rand() % 10;
  bool isStop = false;
  int user_num = 0;

  do {
    cout << "Enter number ";
    cin >> user_num;

    if(user_num != rand_num)
      cout << "Number is incorrect!" << endl;
    else
      isStop = true;
  } while(!isStop);
  cout << "You win!!!";

  return 0;
}