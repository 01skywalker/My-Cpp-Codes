// linear search algorithm uses loops to search for values
#include <iostream>
#include <span>
using namespace std;
void linearSearch(span<const int> arr, int key) {
  // std::span keeps the array and its size together, so no size parameter or sizeof is needed.
  // <const int> = read-only view, no copy.

  for (size_t i = 0; i < arr.size(); ++i) {
    if (arr[i] == key) {
      cout << "key found at " << i << " pos" << endl;
      return;
    }
  }
  cout << "Key not found!" << endl;
}
/*
    Alternate Code :

    void linearSearch(int arr[], int size, int key)
    {
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == key)
        {
            cout << "key found at " << i << " pos" << endl;
            return;
        }
    }
    cout<<"Key not found!"<<endl;
    }
*/
int main() {
  int arr[] = {25, 56, 45, 78, 99};
  int target = 7;
  linearSearch(arr, target);
  return 0;
}
