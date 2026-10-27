/*
A QUEUE is a Linear, Abstract Data Structure that is based on First In First Out
principle.
*/
#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> q;
  q.push(1); //time complexity O(1) -> push, pop, emplace, front
  q.push(21);
  q.push(3);
  q.push(4);
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop(); 
  }
  cout << endl;
  //several other queue functions are :
  // size, swap
  return 0;
}
