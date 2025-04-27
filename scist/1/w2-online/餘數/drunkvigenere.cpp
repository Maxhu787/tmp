#include <iostream>
#include <string>
using namespace std;

int main() {
  string c, k;
  cin >> c >> k;

  for(int i = 0; i < c.length(); i++) {
    int key = k[i] - 'A';
    char o;
    if(i % 2 == 0) {
      o = (c[i] - 'A' - key + 26) % 26 + 'A';
    } else {
      o = (c[i] - 'A' + key) % 26 + 'A';
    }
    cout << o;
  } 
  cout << "\n";
  return 0;
}