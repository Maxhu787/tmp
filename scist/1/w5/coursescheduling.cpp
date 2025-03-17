#include <iostream>
#include <map>
#include <set>
#include <string>
#include <utility>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, int> o;
  set<pair<string, string>> seen;
  while(n--) {
    string first, last, course;
    cin >> first >> last >> course;

    if(seen.insert({course, first + last}).second) {
      o[course]++;
    }
  }

  for(const auto i : o) {
    cout << i.first << " " << i.second << "\n";
  }
  return 0;
}