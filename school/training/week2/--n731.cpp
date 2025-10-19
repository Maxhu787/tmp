#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, m, count = 1;
  while(cin >> n && n != 0) {
    string a[n];
    cin.ignore();
    for(int i = 0; i < n; i++) {
      getline(cin, a[i]);
    }

    cin >> m;
    string b[m];
    cin.ignore();
    for(int i = 0; i < m; i++) {
      getline(cin, b[i]);
    }

    int o = 0;
    int ai=0, aj=0;
    while(o == 0) {
      for(int i = 0; i < n; i++) {
        for(char c : b[i]) {
          cout << c << " " << a[ai][aj] << "\n";
          if(c == a[ai][aj]) {
            aj++;
            if(aj >= a[ai].size()) {
              ai++;
              aj = 0;
            }
            if(ai >= n) {
              o = 3;
            }
          } else if(a[ai][aj] == ' ') {
            while(a[ai][aj] != ' ') {
              aj++;
              if(aj >= a[ai].size()) {
                ai++;
                aj = 0;
              }
              if(ai >= n) {
                o = 3;
                break;
              }
            }
          }
        }
        cout << "-----\n";
      }
    }
    cout << "o: " << o << "\n";
    // cout << "Run #" << count++ << ": " << "\n";
  }
  return 0;
}