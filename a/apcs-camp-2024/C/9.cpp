#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  int a[26] = {0};
  for(char i : s) {
    a[i-'A']++;
  }

  string o;
  int odd = 0;
  char oddC;
  for(int i = 0; i < 26; i++) {
    if(a[i] % 2 == 0) {
      string temp(a[i]/2, char(i + 'A'));
      o += temp;
    } else {
      odd++;
      oddC = char(i + 'A');
      string temp((a[i]-1)/2, char(i + 'A'));
      o += temp;
      if(odd > 1) {
        cout << "IMPOSSIBLE" << "\n";
        return 0;
      }
    }
  }

  cout << o;
  if(odd == 1) cout << oddC;
  for(int i = o.size()-1; i >= 0; i--) {
    cout << o[i];
  }
  cout << "\n";
  return 0;
}