#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>
using namespace std;

int main() {
  int n;
  while (cin >> n && n != 0) {
    map<string, set<string>> mp;
    cin.ignore();

    for (int i = 0; i < n; i++) {
      string s;
      getline(cin, s);
      stringstream ss(s);
      string name, item;
      ss >> name;
      while (ss >> item) {
        mp[item].insert(name);
      }
    }

    for(auto it = mp.begin(); it != mp.end(); it++) {
      cout << it->first;
      for (auto name : it->second) {
        cout << " " << name;
      }
      cout << "\n";
    }

    cout << "\n";
  }

  return 0;
}
