#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> v;
  vector<pair<string, string>> o;
  while(n--) {
    string a, b;
    cin >> a >> b;
    if(!v.empty()) {
      if(find(v.begin(), v.end(), a) == v.end()) {
        v.push_back(a);
        o.push_back({a, b});
      }
    } else {
      v.push_back(a);
      o.push_back({a, b});
    }
  }

  for(int i = 0; i < 12; i++) {
    cout << o[i].first << " " << o[i].second << "\n";
  }
  return 0;
}