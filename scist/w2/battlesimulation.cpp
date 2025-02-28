#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string n;
  cin >> n;
  vector<char> a(n.length());
  char o, p;

  for(int i = 0; i < n.length(); i++) {
    a[i] = n[i];
    if(i >= 2) {
      o = n[i-1];
      p = n[i-2];
      if(o != n[i] && o != p && p != n[i] && a[i-1] != 'C' && a[i-2] != 'C') {
        a[i-1] = 'o';
        a[i-2] = 'o';
        a[i] = 'C';
      } else {
        a[i] = ((n[i] == 'R') ? 'S' : ((n[i] == 'B') ? 'K' : 'H'));
      }
    } else {
      a[i] = ((n[i] == 'R') ? 'S' : ((n[i] == 'B') ? 'K' : 'H'));
    }
  }
  for(int i = 0; i < a.size(); i++) {
    if(a[i] != 'o') {
      cout << a[i] << "";
    }
  }
  cout << "\n";
  return 0;
}