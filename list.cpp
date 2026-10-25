/*
  List is also a sequential container like vectors but they are implemented as
  doubly linked list in C++ We can push elements from back and from front using
  .push_back(element) or .push_front(element) Same for poping elements too,
  pop_back() and pop_front()
*/
#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> l = {1, 2, 3, 4};
  l.push_back(10);
  for (int val : l) {
    cout << val << endl;
  }
  //Some other list functions
  /*
    .emplace_back(element) & .emplace_front(element)
    .pop_back() & .pop_front()
    .size()
    .erase(begining, end)
    .clear()
    .begin()
    .end()
    .rbegin()
    .rend()
    .front()
    .back()
  */
  return 0;
}

