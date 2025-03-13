#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  bool found = false;
  for(int i = n; i <= m; i++) {
    string temp = to_string(i);
    int o=0;
    for(char i : temp) {
      int temp = i - '1';
      o += temp * temp * temp * temp;
    }
    if(o == i) {
      cout << o << " ";
      found = true;
    }
  }
  if(!found) {
    
  }
  cout << "\n";
  return 0;
}