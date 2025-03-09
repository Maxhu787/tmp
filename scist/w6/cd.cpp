#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  while(cin >> n >> m && n != 0 && m != 0) {
    vector<int> a(n), b(m);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    
    int i=0, j=0, o=0;
    while(i < n && j < m) {
      if(a[i] == b[j]) {
        o++;
        i++;
        j++;
      }
      else if(a[i] < b[j]) i++;
      else j++;
    }
    cout << o << "\n";
}
  return 0;
}