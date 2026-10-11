/*
Insertion sort is a simple comparison-based sorting algorithm that builds the
final sorted array one element at a time, by repeatedly taking the next unsorted
element and inserting it into its correct position within the already-sorted
part of the array.

How it works:

    Treat the first element as a trivially "sorted" portion of size 1.
    Take the next element (the "key") from the unsorted part.
    Shift elements in the sorted part that are greater than the key one position
to the right, to make room. Insert the key into its correct position. Repeat for
each remaining element until the whole array is sorted.

Example (sorting [5, 3, 8, 1]):

    Start: [5 | 3, 8, 1] (sorted part: [5])
    Insert 3: 3 < 5 → shift 5 right → [3, 5 | 8, 1]
    Insert 8: 8 > 5 → stays put → [3, 5, 8 | 1]
    Insert 1: 1 < 8, 5, 3 → shifts all → [1, 3, 5, 8]
    Done.

Key properties:

    Time complexity:
        Worst/average case: O(n²) — reverse-sorted input requires maximum
shifting.

        Best case: O(n) — already-sorted input, since each element only needs
          one comparison to confirm it's in place. Space complexity: O(1) —
sorts in place.

        Stable — equal elements retain their relative order (as long as you
shift, not swap past equal elements, using < rather than <= in the comparison).

        Adaptive — performs very well on data that's already nearly sorted,
since fewer shifts are needed. Online — can sort a list as it receives new
elements, without needing the whole array upfront.

It's a good practical choice for small or nearly-sorted datasets, and is often
used as the base case inside more complex algorithms like Timsort (which
switches to insertion sort for small subarrays).
*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) { //O(n^2)
  for (int i = 1; i < n; ++i) {
    int current = arr[i];
    int prev = i - 1;
    while (prev >= 0 && arr[prev] > current) {
      arr[prev + 1] = arr[prev];
      prev--;
    }
    arr[prev + 1] = current;
  }
}
int main() {
  int arr[] = {5, 4};
  insertionSort(arr, 2);
  for (int el : arr) {
    cout << el << " ";
  }
  cout << "\n<-------------------------------Code "
          "Complete------------------------------->\n";
  return 0;
}
