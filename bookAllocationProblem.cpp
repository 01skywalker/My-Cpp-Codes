/*
Book Allocation Problem
There are N books, each ith book has A[i] number of pages.
You have to allocate books to M number of students so that the maximum number of
pages allocated to a student is minimum.
- Each book should be allocated to a student.
- Each student has to be allocated atleast one book.
- Allotment should be in contiguous order.

Calculate and return that minimum possible number.
Return -1 if a valid assignment is not possible.

Example : arr = [2,1,3,4], N = 4, M = 2
        S1                                          S2
        2                                           8
        3                                           7
        6                                           4   (Minimum value of
maximum pages allocated to a student)     (Answer) if M > N, valid assignment is
not possible
*/

#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<int> &nums, int m, int maxAllowedPages) {
  int pages = 0;
  for (int el : nums) {
    if (el > maxAllowedPages) {
      return false;
    }
    if (pages + el <= maxAllowedPages) {
      pages += el;
    } else {
      m--;
      pages = el;
    }
  }
  if (m - 1 < 0) {
    return false;
  } else {
    return true;
  }
}
int allocateBooks(vector<int> &nums, int n, int m) {
  if (m > n) {
    return -1;
  }
  int min = 0;
  int max = 0;
  int ans = -1;
  for (int el : nums) {
    max += el;
  }
  int low = min, high = max;

  while (low <= high) {
    int mid = low + ((high - low) / 2);
    if (isValid(nums, m, mid)) {
      ans = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}
int main() { // NOLINTBEGIN(readability-magic-numbers)
  auto testcase = vector{2, 1, 3, 4};
  int n = 4;
  int m = 2;
  cout << "Minimum allowed maximum number of pages for a student is : "
       << allocateBooks(testcase, n, m) << " pages";
  // NOLINTEND(readability-magic-numbers)
  cout << "\n<-------------------------------Code "
          "Complete------------------------------->\n";
  return 0;
}
