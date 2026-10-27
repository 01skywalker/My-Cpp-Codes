#include <iostream>
#include <vector>
using namespace std;

int main() {
  pair<int, char> pai = {1, 'a'};
  cout << pai.first << endl; //1
  cout << pai.second << endl; //a
  vector<pair<int,int>> nums = {{1,2}, {2,4}, {4,8}};
  nums.push_back({8,16}); //we have to create an object before pushing
  nums.emplace_back(16,32); // creates in-place objects
  return 0;
}
