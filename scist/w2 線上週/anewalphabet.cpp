#include <iostream>
#include <string>
using namespace std;

int main() {
  string a[200] = {""};
  a['a'] = "@";
  a['b'] = "8";
  a['c'] = "(";
  a['d'] = "|)";
  a['e'] = "3";
  a['f'] = "#";
  a['g'] = "6";
  a['h'] = "[-]";
  a['i'] = "|";
  a['j'] = "_|";
  a['k'] = "|<";
  a['l'] = "1";
  a['m'] = "[]\\/[]";
  a['n'] = "[]\\[]";
  a['o'] = "0";
  a['p'] = "|D";
  a['q'] = "(,)";
  a['r'] = "|Z";
  a['s'] = "$";
  a['t'] = "']['";
  a['u'] = "|_|";
  a['v'] = "\\/";
  a['w'] = "\\/\\/";
  a['x'] = "}{";
  a['y'] = "`/";
  a['z'] = "2";

  string s;
  getline(cin, s);
  for(int i = 0; i < s.length(); i++) {
    char temp = s[i];
    if((int(temp) < 97 && int(temp) > 90) || (int(temp) > 122) || (int(temp) < 65)) {
      cout << temp;
    } else {
      cout << a[tolower(temp)];
    }
  }
  cout << "\n";
  return 0;
}

