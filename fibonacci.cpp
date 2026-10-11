#include <iostream>
using namespace std;

void fibonacci(int num) {
  int series, num1 = 1, num2 = 1;
  cout << "The first " << num<<" terms in fibonnaci series is : ";
  for (int i = 1; i <= num; i++) {
    series = num1 + num2;
    cout << num1;
    num1 = num2;
    num2 = series;
    if (i != num)
      cout << ", ";
  }
  cout << endl;
}

int main() {
  int number;
  cout << "The program prints the first x terms of fibonnaci series \n"
       << "Give it a try!\n"
       << "x : ";
  cin >> number;
  fibonacci(number);
  return 0;
}
