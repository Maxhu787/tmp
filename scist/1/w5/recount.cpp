#include <iostream>
#include <map>
#include <utility>
#include <string>
using namespace std;

int main() {
  string n;
  map<string, int> m;

  while(getline(cin, n) && n != "***") {
    m[n]++;
  }

  int o = 0;
  string ans;
  bool multiple = false;
  for(const auto& i : m) {
    if(i.second == o) multiple = true;
    if(i.second > o) {
      o = i.second;
      ans = i.first;
      multiple = false;
    }
  }

  if(multiple) {
    cout << "Runoff!" << "\n";
  } else {
    cout << ans << "\n";
  }
  return 0;
}