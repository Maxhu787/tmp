#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, o=0;
  cin >> n;
  cin.ignore();

  while(n--) {
    string s;
    getline(cin, s);

    if(s[1] == '-') o--;
    else o++;
  }

  cout << o << "\n";
}
