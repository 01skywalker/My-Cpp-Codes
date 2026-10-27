#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  vector<int> vec = {2, 4, 1, 5};
  reverse(vec.begin(), vec.begin() + 2);

  for (auto el : vec) {
    cout << el << endl;
  }
  string s = "abc";
  next_permutation(s.begin(), s.end());
  cout << s << endl;
  prev_permutation(s.begin(), s.end());
  cout << s << endl;
  return 0;
}
