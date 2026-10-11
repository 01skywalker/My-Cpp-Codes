/*
Bubble Sort : Bubble sort is a simple comparison-based sorting algorithm that
repeatedly steps through a list, compares adjacent elements, and swaps them
if they're in the wrong order. This process repeats until no swaps are
needed, meaning the list is sorted.
How it works :
  Start at the beginning of the list.
  Compare each pair of adjacent elements.
  If the left element is greater than the right one (for ascending order), swap
  them. Move to the next pair and repeat until you reach the end of the list —
  this completes one "pass." Repeat the passes until a full pass happens with no
  swaps, meaning the list is sorted.

The name comes from the way larger elements "bubble up" to the end of the list
with each pass, like bubbles rising to the surface. Example

Sorting [5, 1, 4, 2, 8]:

Pass 1:

Compare 5, 1 → swap → [1, 5, 4, 2, 8]
Compare 5, 4 → swap → [1, 4, 5, 2, 8]
Compare 5, 2 → swap → [1, 4, 2, 5, 8]
Compare 5, 8 → no swap → [1, 4, 2, 5, 8]

Pass 2:

Compare 1, 4 → no swap
Compare 4, 2 → swap → [1, 2, 4, 5, 8]
Compare 4, 5 → no swap
Compare 5, 8 → no swap

No swaps needed after this, so the list is sorted: [1, 2, 4, 5, 8]

*/

#include <iostream>
using namespace std;

void bubbleSort(int nums[], int n) { // O(n^2)
  int temp;
  for (int i = 0; i < n - 1; i++) {
    bool isSwapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (nums[j] > nums[j + 1]) {
        temp = nums[j + 1];
        nums[j + 1] = nums[j];
        nums[j] = temp;
        isSwapped = true;
      }
    }
    if (!isSwapped) {
      break;
    }
  }
}

int main() {
  int arr[] = {9, 8, 7, 6, 5, 5, 2, 3, 1};
  bubbleSort(arr, 9);
  for (int el : arr) {
    cout << el << " ";
  }
  cout << "\n<-------------------------------Code "
          "Complete------------------------------->\n";
  return 0;
}
