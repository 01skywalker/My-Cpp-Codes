/*
  Map is specifically used to store (key, value) pairs. By default, the key is
  sorted in ascending order
  A Map is implemented in the form of a self balancing tree. Hence various
  inserting and deletion functions have O(logn) time complexity
*/
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  map<string, int> m;
  m["Graphics Card"] = 65000; // to insert or change a key-value pair
  m["Display"] = 15000;
  m.emplace("Processor", 25000);
  m.insert({"Motherboard", 15000});
  m.erase("Display");
  for (auto p : m) {
    cout << p.first << " : " << p.second << " " << endl;
  }
  cout << "count = " << m.count("Processor")
       << endl; // since map has unique keys, it can only return 0 or 1
                // depending on whether the value does not exists or it does.
                // Hence, it can be use to check whether a key exists in a map
                // or not
  // We can also simply print the value of a key
  cout << m["Motherboard"] << endl; // if the key does not exists, it returns 0
  if (m.find("Graphics Card") != m.end()) {
    cout << "found" << endl;
  } // used to find a key-value pair, if the value is found, it returns the
    // iterator of the key-value pair, else it returns the iterator to
    // memory location of m.end()
  else
    cout << "Not Found" << endl;
  //.end() -> points to the position past the last key-value pair (or element)
  // NOTE: Some other functions are size, empty, etc
  return 0;
}
