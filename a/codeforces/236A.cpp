#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
  string s;
  unordered_map<int, int> m;
  getline(cin, s);

  for(auto i : s) {
    m[i]++;    
  }

  int o =0;
  for(int i = 61; i < 123; i++) {
    if(m[i] != 0) o++;
  }
  cout << (o % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << "\n";
}