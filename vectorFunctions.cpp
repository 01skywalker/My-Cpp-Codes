//  Some more vector functions

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  nums.erase(nums.begin() +
             2); // It erases the element at the index passed to it, however, we
                 // cannot directly pass the index, we have to use an iterator (
                 // a pointer ) like nums.begin() + position of the element(the
                 // one we want to erase)
  nums.erase(nums.begin() + 2,
             nums.begin() +
                 4); // We can also erase a range of numbers from vectors using
                     // erase. For this we need a start and end where end is
                     // exclusive, i.e., the element to which the end pointer is
                     // pointing to remains in the vector.

  //.erase() and .clear() changes the size but the capacity remains the same.
  // To insert an element at a position, we use .insert(position, value)
  // function
  nums.insert(nums.begin() + 2, 100);
  for (int el : nums) {
    cout << el << " ";
  }
  cout << endl;
  nums.clear(); // erases all the elements from the vector
  cout << "size : " << nums.size() << endl;
  cout << "capacity : " << nums.capacity() << endl;
  cout << "is Empty ? : " << nums.empty()
       << endl; // Returns 1 (True) if the vector is empty
  return 0;
}
