#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int arr[] = {1, 4, 5, 3, 2};
  // sort(arr, arr + 4); // to sort array, provide the start pointer (the
  // array itself), and end pointer (array + size)
  vector<int> vec = {4, 5, 3, 2, 1};
  sort(arr, arr + 5, greater<int>()); // sorts array in descending order
  for (int el : arr) {
    cout << el << " ";
  }
  cout << endl;
  sort(vec.begin(), vec.end());
  vector<pair<int, int>> p = {{1, 2}, {2, 4}, {0, 9}, {5, 2}};
  sort(p.begin(), p.end());

  for (auto el : p) {
    cout << el.first << " " << el.second << endl;
  }

  return 0;
}
