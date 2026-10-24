/*
  Vector is a container that stores data like array but it is dynamic in
  nature, i.e., we can increase the size of vector at runtime.

  Size Growth of Vectors :==>
  if initial size of vector is 0 (i.e. declared as vector <datatype> vec;), its
  capacity increase by 1 on first insertion. On further insertions, a new vector
  with double the capacity of intial vector is created in which the old data
  gets copied and new data is inserted. Capacity gets doubled again if there is
  no more space left to insert another element.

  capacity(new vector) = 2 * capacity(old vector)
*/

#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> vec;  // declaration of a vector
  vec.push_back(1); // assumes same datatype element as vector datatype, pushes
                    // the data element passed as argument to the end of vector
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  cout << "size : " << vec.size() << "\ncapacity : " << vec.capacity()
       << endl;        // size : 3 , capacity : 4
  vec.emplace_back(6); // creates inplace objects
  vec.pop_back();      // deletes last element from the vector
  // To access the data at any (x) index, use: vec[x] or vec.at(x)
  cout << "value at index 2 : " << vec[2] << endl; // most used
  cout << "value at index 3 : " << vec.at(3) << endl;
  cout << "front : " << vec.front()
       << endl; // returns the element at 1st (=0) index
  cout << "back : " << vec.back()
       << endl; // returns the element at last (=vec.size()-1) index

  // Ways to Initialize / Define vectors :
  vector<int> nums = {4, 5, 6, 7}; // simple array like definition
  vector<int> hmmm(3, 10);         // size = 3, value at each index = 10
  vector<int> vec2(nums); // makes vec2 and copies nums elements to vec2
  return 0;
}
// All the vector functions in this code have time complexity O(1);
