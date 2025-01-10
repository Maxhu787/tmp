#include <iostream>
#include <string>
using namespace std;

int main() {
  int a[256] = {};    
  a['B'] = a['F'] = a['P'] = a['V'] = 1;
  a['C'] = a['G'] = a['J'] = a['K'] = a['Q'] = a['S'] = a['X'] = a['Z'] = 2;
  a['D'] = a['T'] = 3;
  a['L'] = 4;
  a['M'] = a['N'] = 5;
  a['R'] = 6;
  
  string s;

  while(cin >> s) {
  	int prev = 0;
    for(int i = 0; i < s.size(); i++) {
      int current = a[s[i]];

      if((i == 0 && current != 0) || (current != prev && current != 0)) {
        cout << current;
      }
      prev = current;
    }
    cout << '\n';
  }
  return 0;
}