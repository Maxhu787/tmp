#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, count = 1;
  while(cin >> n && n != 0) {
    string a[n], b[n];
    cin.ignore();
    for(int i = 0; i < n; i++) {
      getline(cin, a[i]);
    }
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
      getline(cin, b[i]);
    }

    ;
    cout << "Run #" << count++ << ": " << "\n";
  }
  return 0;
}