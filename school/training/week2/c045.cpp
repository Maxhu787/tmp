#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
  vector<string> a;

  string s;
  int mw = 0;
  while(getline(cin, s)) {
    a.push_back(s);
    mw = max(mw, int(s.size()));
  }

  for(int i = 0; i < mw; i++) {
    for(int j = a.size() - 1; j >= 0; j--) {
      if(a[j].size() <= i) {
        cout << " ";
      } else {
        cout << a[j][i];
      }
    }
    cout << "\n";
  }
  return 0;
}
