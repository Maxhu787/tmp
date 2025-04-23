#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#define OK ios_base::sync_with_stdio(0);
#define LOL cin.tie(0); cout.tie(0);

int main() {
  OK LOL
  int o=0;
  string s, u="", l="";
  getline(cin, s);

  for(char i : s) {
    if(isupper(i)) {
      o++;
      u+=i;
    } else if(islower(i)) l+=i;
  }

  cout << u << "\n";
  cout << l << "\n";
  cout << o << "\n";
  return 0;
}