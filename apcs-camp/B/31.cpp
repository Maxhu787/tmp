#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while(n--) {
    int a, b, c;
    cin >> a >> b >> c;
    bool found = false;
    
    for(int i = a + 1; i < b; i++) {
      if(i % c != 0) {
        if(found) cout << " ";
        cout << i;
        found = true;
      }
    }
    if(!found) cout << "No free parking spaces.";
    cout << "\n";
  }
  return 0;
}