#include <iostream>
#include <string>
using namespace std;

int main() {
  int a[26] = {
    2, 22, 222, 
    3, 33, 333,
    4, 44, 444,
    5, 55, 555,
    6, 66, 666,
    7, 77, 777, 7777,
    8, 88, 888,
    9, 99, 999, 9999
  };
  int n;
  cin >> n;
  cin.ignore();
  for(int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    cout << "Case #" << i+1 << ": ";
    for(int j = 0; j < s.length(); j++) {
      if(s[j] == ' ') {
        cout << "0";
      } else {
        int index = s[j] - 'a';
        cout << a[index];
      }
      if (j < s.length() - 1) {
        if (s[j] == ' ' && s[j+1] == ' ') {
          cout << " ";
        } else if (s[j] != ' ' && s[j+1] != ' ' && (a[s[j] - 'a'] % 10 == a[s[j+1] - 'a'] % 10)) {
          cout << " ";
        }
      }
    }
    cout << endl;
  }
  return 0;
}