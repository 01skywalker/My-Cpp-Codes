#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cout << "Enter a string : " << endl;
  getline(cin, str);
  string strrev = str;
  reverse(strrev.begin(), strrev.end());
  if (str == strrev) {
    cout << "It is a Palindrome!" << endl;
    return 0;
  }
  cout << "It is Not a Palindrome" << endl;
  return 0;
}
