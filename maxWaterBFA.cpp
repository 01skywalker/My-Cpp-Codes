#include <iostream>
#include <vector>
using namespace std;
double maxArea(vector<int> vec) {
  int left;
  int right;
  int width;
  int height;
  double maxArea = 0;

  double currentArea = 0;
  for (left = 0; left < (int)vec.size(); left++) {
    for (right = left + 1; right < (int)vec.size(); right++) {
      width = right - left;
      height = (vec[right] < vec[left]) ? right : left;
      currentArea = width * height;
      maxArea = max(maxArea, currentArea);
    }
  }
  return maxArea;
}
int main() {
  // NOLINTBEGIN(readability-magic-numbers)
  auto testcase = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  // NOLINTEND(readability-magic-numbers)
  cout << maxArea(testcase);
  cout << "\n<-------------------------------Code "
          "Complete------------------------------->\n";
  return 0;
}
