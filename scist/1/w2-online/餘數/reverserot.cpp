#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
  int n;

  while(cin >> n && n != 0) {
    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    for(char i : s) {
      int e;
      if(i == '_') e = 26;
      else if (i == '.') e = 27;
      else e = i - 'A'; 
      
      e = (e + n) % 28;
      cout << chars[e];
    }
    cout << "\n";
  }
  return 0;
}