/*
Selection sort is a simple comparison-based sorting algorithm that works by
repeatedly finding the smallest (or largest, depending on order) remaining
element and moving it into its correct position.

How it works:

    Divide the array (conceptually) into a sorted part (at the front, initially
empty) and an unsorted part (the rest). Scan the unsorted part to find its
minimum element. Swap that minimum element with the first element of the
unsorted part — this extends the sorted part by one and shrinks the unsorted
part by one. Repeat until the unsorted part is empty.

Example (sorting [5, 3, 8, 1]):

    Pass 1: smallest in [5,3,8,1] is 1 → swap with index 0 → [1, 3, 8, 5]
    Pass 2: smallest in [3,8,5] is 3 → already in place → [1, 3, 8, 5]
    Pass 3: smallest in [8,5] is 5 → swap → [1, 3, 5, 8]
    Done.

Key properties:

    Time complexity: O(n²) in all cases (best, average, worst) — it always scans
the remaining elements to find the minimum, regardless of input order. Space
complexity: O(1) — sorts in place, no extra memory needed. Number of swaps: O(n)
— at most one swap per pass, making it efficient when write/swap operations are
costly (e.g., writing to flash memory). Not stable by default — equal elements
can be reordered relative to each other (though a stable variant exists using
insertion instead of swapping). Not adaptive — doesn't get faster on
already-sorted input, unlike insertion or bubble sort.

It's mainly taught for its simplicity rather than practical performance —
algorithms like quicksort, mergesort, or even insertion sort (for
small/nearly-sorted data) outperform it in real use.
*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){ //O(n^2)
  for(int i = 0; i < n-1; ++i){
    int sI = i;
    for(int j = i+1; j < n; ++j)
    {
      if(arr[j] < arr[sI]){
        sI = j;
      }
    }
    swap(arr[i], arr[sI]);
  }
}
int main(){
  int arr[] = {1,2,3,5,6,3,2,9,4,7};
  selectionSort(arr, 10);
  for(int el:arr){
    cout<<el<<" ";
  }
  cout<<"\n<-------------------------------Code Complete------------------------------->\n";
  return 0;
}
