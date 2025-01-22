#include <iostream>
#include <vector>
using namespace std;

int main() {
  int d;
  cin >> d;

  while(d--) {
    int a=1,b=2, tmp, i=1, n;
    vector<int> o(10, -1);
    cin >> n;
    while(true) {
      int mod = b % n;
      if(o[mod] != -1) {
        cout << o[mod] + 1 << "\n";
        break;
      } else {
        o[mod] = i;
        tmp = a;
        a = b;
        b = tmp + b;
        i++;
      }
    }
  }
  return 0;
}