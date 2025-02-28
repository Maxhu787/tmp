#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int n, o=1;
  string t;
  while(cin >> n && n != 0) {
    vector<string> a;
    vector<string> b;
    for(int i = 0; i < n; i++) {
      cin >> t;
      if(i % 2 == 0) {
        a.push_back(t);
      } else {
        b.push_back(t);
      }
    }
    cout << "SET " << o << "\n";
    for(int i = 0; i < a.size(); i++) {
      cout << a[i] << "\n";
    }
    for(int i = b.size(); i > 0; i--) {
      cout << b[i-1] << "\n";
    }
    o++;
  }
  return 0;
}