#include <iostream>
using namespace std;

int a[7], b[7];

int main() {
  int t;
  cin >> t;

  while(t--) {
    bool aa=true, bb=true, cc=true;
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;

    if(a[1] != a[3] && b[1] != b[3] && a[1] == a[5] && b[1] == b[5]) aa = false;
    if(a[6] == 1 && b[6] == 0) bb = false;
    if(a[1] != b[1] && a[3] != b[3] && a[5] != b[5]) cc = false;
    
    if(aa) cout << 'A';
    if(bb) cout << 'B';
    if(cc) cout << 'C';
    if(!aa && !bb && !cc) cout << "None";
    cout << "\n";
  }
  return 0;
}