/*
  find lexicographically next permutaion
  For (n) numbers, number of permutations is (n!)
  Lexicographical order (also called dictionary or lexical order) is a way of
  sorting sequences of symbols—such as letters, numbers, or words—based on the
  alphabetical order used in dictionaries
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void findNextPermutation(vector<int> &nums) {
  int pivot = -1, len = nums.size();
  for (int i = len - 2; i >= 0; --i) {
    if (nums[i] < nums[i + 1]) {
      pivot = i;
      break;
    }
  }
  if (pivot == -1) {
    reverse(nums.begin(), nums.end());
    return;
  }
  for(int i = len; i > pivot; i--){
    if(nums[i] > nums[pivot]){
      swap(nums[i], nums[pivot]);
    }
  }
  swap(nums[pivot + 1], nums[len - 1]);
}
int main() {
  vector<int> n = {3, 2, 1};
  findNextPermutation(n);
  for (int el : n) {
    cout << el << ' ';
  }
  cout << endl;
  cout << "\n<-------------------------------Code "
          "Complete------------------------------->\n";
  return 0;
}
