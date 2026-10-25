#include <iostream>
#include <vector>
using namespace std;
// We have 2 iterators in Vectors, .begin() => points to 0th index element ,
// NOTE: .end() => points to the next memory location of the last element of
// vector
int main() {
  vector<int> nums = {110, 101, 20, 30};
  cout << *nums.begin() << endl; // we can get the value pointed by .begin() by
                                 // using dereference operator (*)
  cout << *nums.end() << endl;   // Its upto the compiler's discretion to give
                                 // either the garbage value or 0

  // We can create our own iterators too
  // vector<int>::iterator itr;
  for (auto itr = nums.begin(); itr != nums.end(); ++itr) {
    cout << *itr << " ";
  }
  cout << endl;
  // There are reverse iterators too
  // vector<int>::reverse_iterator ritr;
  //auto keyword automatically defined the type of variable depending on the type of data its storing
  for (auto ritr = nums.rbegin(); ritr != nums.rend(); ++ritr) { //.rend() = points to -1 index, .rbegin() = points to last index element
    cout << *(ritr) << " ";
  }
  cout << endl;
  return 0;
}
