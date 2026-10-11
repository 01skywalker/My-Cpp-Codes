#include <iostream>
#include <vector>
using namespace std;
double maxArea(vector<int> vec) {
  int left = 0;
  int right = vec.size() - 1;
  int width;
  int height;
  double ans = 0;
  double currentArea = 0;
  while (left < right) {
    width = right - left;
    height = (vec[left] < vec[right]) ? vec[left] : vec[right];
    currentArea = width * height;
    ans = max(currentArea, ans);
    if (vec[left] < vec[right]) {
      left++;
    } else {
      right--;
    }
  }
  return ans;
}
int main() {
  // NOLINTBEGIN(readability-magic-numbers)
  auto testcase = vector{1, 8, 6, 2, 5, 4, 8, 3, 7};
  // NOLINTEND(readability-magic-numbers)
  cout << maxArea(testcase);
  cout << "\n<-------------------------------Code "
          "Complete------------------------------->\n";
  return 0;
}
