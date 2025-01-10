#include <iostream>
#include <string>
using namespace std;

int main() {
  int a[256] = {};
  a['a'] = a['b'] = a['c'] = '2';
  a['d'] = a['e'] = a['f'] = '3';
  a['g'] = a['h'] = a['i'] = '4';
  a['j'] = a['k'] = a['l'] = '5';
  a['m'] = a['n'] = a['o'] = '6';
  a['p'] = a['q'] = a['r'] = a['s'] = '7';
  a['t'] = a['u'] = a['v'] = '8';
  a['w'] = a['x'] = a['y'] = a['z'] = '9';
  
  int n;
  cin >> n;
  string strings[n];
  for(int i = 0; i < n; i++) {
    cin >> strings[i];
  }

  string o;
  cin >> o;
  int d = o.size(), dd=0;
  for(int i = 0; i < n; i++) {
    string current = strings[i];
    if(current.size() == d) {
    	bool ok = true;
      for(int j = 0; j < current.size(); j++) {
        if(a[current[j]] != o[j]) {
        	ok = false;
        }
      }
      if(ok) {
      	dd += 1;
      }
      cout << '\n';
    } else {
      continue;
    }
  }
  cout << dd << '\n';
}