#include <iostream>
#include <map>
using namespace std;

int main() {
  // map<string, int> nm;
  // nm.emplace("tv", 100);
  // nm.emplace("tv", 1500); // wont create a new object or update old value
  // since
  //                         // map has unique keys only
  // for (auto def : nm) {
  //   cout << def.first << " : " << def.second << endl;
  // }
  multimap<string, int> m;
  m.emplace("tv", 300);
  m.emplace("tv", 100);
  m.emplace("tv", 100);
  m.emplace("tv", 400);
  m.emplace("tv", 100);
  // m.erase("tv");         // erases all the instances of a key passed to it
  m.erase(m.find("tv")); // deletes the very first instance of the key
  for (auto def : m) {
    cout << def.first << " : " << def.second << endl;
  }
  return 0;
}
