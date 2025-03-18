#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  int n, m;
  cin >> n;

  map<string, int> a;
  while(n--) {
    string s;
    cin >> s;
    a[s]++;
  }
  cin >> m;
  while(m--) {
    string s;
    cin >> s;
    a[s]--;
  }
  
  int o = 0;
  for(auto i : a) {
    if(i.second > o) o = i.second;
  }
  cout << o << "\n";
  return 0;
}