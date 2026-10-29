#include <iostream>
#include <string>
using namespace std;

// char str[100];
// cout << "Enter string : ";
// cin.getline(str, 100, '$'); // to not ignore words typed after ' ' which normal cin ignores
// cout << "Output : " << str << endl;
int main() {
  string str0 = "Love Story";
  string str1 = "Yash"; // contiguous, dynamic in nature : resizable at runtime
  cout << str1 << endl;
  string str2 = "Aggarwal";
  string str = " Its our love story";
  string str3 = str0 + str;       // concatenation
  cout << (str1 == str2) << endl; // comparison
  cout << (str1 < str2) << endl;
  cout << str3 << endl;
  cout << str3.length() << endl;

  string mood;
  cout << "mood ? : ";
  getline(cin, mood);
  for (char ch : mood) {
    cout << ch << " ";
  }
  return 0;
}
