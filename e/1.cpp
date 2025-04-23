#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);

  string s;
  getline(cin, s);
  long long o = 1;
  bool zero = false;

  for(int i = 0; i < s.length(); i++) {
    if(s[i] == '0') zero = true;
    if(i != 0) cout << "*";
    cout << int(s[i] - '0');
    o *= int(s[i] - '0');
  }

  if(zero) cout << "=0\n";
  else cout << "=" << o << "\n";

  return 0;
}
