#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  long long current=1, o=0;
  for(int i = 0; i < n; i++) {
    int t;
    cin >> t;
    o += t * current;
    current++;
  }
  cout << o << "\n";
  return 0;
}