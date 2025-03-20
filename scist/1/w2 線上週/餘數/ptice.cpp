#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  vector<int> oo(3, 0);
  int o = INT_MIN;

  vector<string> name = {"Adrian", "Bruno", "Goran"};

  for(int i = 0; i < n; i++) {
    switch(i % 3) {
      case 0:
        if(s[i] == 'A') oo[0]++;
        break;
      case 1:
        if(s[i] == 'B') oo[0]++;
        break;
      case 2:
        if(s[i] == 'C') oo[0]++;
        break;
    }
    switch((i+1) % 4) {
      case 1: case 3:
        if(s[i] == 'B') oo[1]++;
        break;
      case 2:
        if(s[i] == 'A') oo[1]++;
        break;
      case 0:
        if(s[i] == 'C') oo[1]++;
        break;
    }
    switch((i / 2 + 2) % 3) {
      case 0:
        if(s[i] == 'A') oo[2]++;
        break;
      case 1:
        if(s[i] == 'B') oo[2]++;
        break;
      case 2:
        if(s[i] == 'C') oo[2]++;
        break;
    }
  }
  
  for(int i = 0; i < 3; i++) {
    o = max(o, oo[i]);
  }
  cout << o << "\n";
  for(int i = 0; i < 3; i++) {
    if(oo[i] == o) {
      cout << name[i] << "\n";
    }
  }

  return 0;
}