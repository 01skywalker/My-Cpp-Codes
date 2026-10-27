/*
  Priority Queue is a special type of queue that under the hood uses a max/min
  heap structure. Hence, internally its a binary tree. It is visualised as a
  Stack, highest priority element is the element with largest value. (by
  default)
*/
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
  // ## priority_queue<int> pq;
  // -> to build a reverse order priority queue (small element higher priority),
  // use the following syntax
  priority_queue < int, vector<int>, greater<int>> pq;
  // -> functor (greater<int>) is a function object that is passed to get some task
  // executed.
  // -> Here, greater<int> is a comparitor (some functions that defines
  // the logic about how the comparison is to be made)
  pq.push(10);
  pq.push(1);
  pq.push(2);
  pq.push(3);
  pq.push(4);
  pq.push(5);
  while (!pq.empty()) {
    cout << pq.top() << ' ';
    pq.pop();
  }
  cout << endl;
  //# Time Complexities of priority queue functions
  /*
    push, emplace, pop -> O(logn)
    top, size, empty -> O(1)
  */
  return 0;
}
