#include <iostream>
#include <string>
using namespace std;
bool isAlphaNumeric(char ch) {
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    return true;
  else
    return false;
}
bool isPalindrome(string s) {
  int start = 0, end = s.length() - 1;
  while (start < end) {
    if (!isAlphaNumeric(s[start])) {
      start++;
      continue;
    }

    if (!isAlphaNumeric(s[end])) {
      end--;
      continue;
    }
    if (tolower(s[start]) != tolower(s[end])) {
      return false;
    }
    start++;
    end--;
  }
  return true;
}
int main() {
  string s = "na@man$";
  cout << isPalindrome(s) << endl;
  return 0;
}
