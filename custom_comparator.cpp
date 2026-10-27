#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
// to buid a custom logic, we make a custom comparator
// comparators are nothing but boolean functions based upon some comparisons
bool comparator(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return false;

  if (p1.first < p2.first)
    return true;
  else
    return false;
}
int main() {

  vector<pair<int, int>> p = {{1, 2}, {2, 4}, {0, 9}, {5, 2}};
  sort(p.begin(), p.end(), comparator);

  for (auto el : p) {
    cout << el.first << " " << el.second << endl;
  }


  return 0;
}
