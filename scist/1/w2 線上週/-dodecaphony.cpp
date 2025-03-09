#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> a, b;

  map<string, int> m = {
    {"C", 0}, {"C#", 1}, {"D", 2}, {"D#", 3}, 
    {"E", 4}, {"F", 5}, {"F#", 6},  {"G", 7},
    {"G#", 8}, {"A", 9}, {"A#", 10},  {"B", 11}
  };

  for(int i = 0; i < n; i++) {
    string t;
    cin >> t;
    a.push_back(m[t]);
  }
  for(int i = 0; i < n; i++) {
    string t;
    cin >> t;
    b.push_back(m[t]);
  }
  int t, o;
  for(int i = 0; i < n; i++) {  
    if(i != 0) {
      if(b[i] - a[i] != t) {
        o = 1;
      }
    }
    t = b[i] - a[i];
  }

  return 0;
}