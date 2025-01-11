#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long n;
  vector<int> o;
  cin >> n;
  while(n != 1) {
    int tmp = 9;
    while(n % tmp != 0) {
      tmp-=1;
      if(tmp < 2) {
        cout << -1 << "\n";
        return 0;
      }
    }
    n /= tmp;
    o.push_back(tmp);
  }
  for(int i = o.size() - 1; i >= 0; i--) {
    cout << o[i] << " ";
  }
  cout << "\n";
  return 0;
}