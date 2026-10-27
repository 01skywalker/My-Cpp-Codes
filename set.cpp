#include <iostream>
#include <set>
using namespace std;
int main() {
  set<int> s; // stores elements in ascending order
  s.insert(1);
  s.insert(2);
  s.insert(3);
  // s.insert(4);
  // s.insert(5);
  // s.insert(6);
  // s.insert(7);
  s.insert(1); // Duplicate values are ignored within a set, and they are not
               // insterted into the set
  // Set has same set of functions as of maps, since, they are created in same
  // manner under the hood
  cout << *s.lower_bound( // lower_bound : Value should not be less than key
      4); // return the iterator to either same value (if exists) or
          // the just bigger value than the value passed (if exists),
          // else returns 0 or .end() iterator
  // Similarly, we have upper_bound too
  // upper_bound : Value should be greater than the key
  // Similar to maps, set also have multiset(multiple same elements allowed) and
  // unordered set (need to use <unordered_set>) does not have lowerbound and upperbound functions
}
