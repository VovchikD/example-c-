#include <iostream>

using namespace std;

int main() {
  float num1, num2;
  cout << "Enter number one: ";
  cin >> num1;

  cout << "Enter number two: ";
  cin >> num2;

  char math;
  cout << "Enter math symbol: ";
  cin >> math;

  switch(math) {
    case '+': cout << "Result: " << num1 + num2 << endl; break;
    case '-': cout << "Result: " << num1 - num2 << endl; break;
    case '*': cout << "Result: " << num1 * num2 << endl; break;
    case '/': 
      if(num2 == 0.0f) 
        cout << "Error " << endl;
      else
        cout << "Result: " << num1 / num2 << endl; break;
    default: cout << "Error math symbol!" << endl;
  }

  return 0;
}

// int a = 10;
  // a = a + 5;  equele 15
  // a += 5; equele 15
  // a++; a + 1