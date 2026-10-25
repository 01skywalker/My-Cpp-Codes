/*
A STACK is a non-linear Abstract Data Structure. It is a LIFO (Last In First Out
structure) push, emplace, top, pop, size, empty, swap
*/
#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  // while (!s.empty()) {
  //   cout << s.top() << " ";
  //   s.pop();
  // }
  stack<int> s2;
  s2.swap(s);
  cout << "s size : " << s.size() << endl;   // 0
  cout << "s2 size : " << s2.size() << endl; // 5
}
