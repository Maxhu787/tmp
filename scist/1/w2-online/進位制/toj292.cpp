#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int decimal=0, power=0;
  while(c > 0) {
    int d = c % 10;
    decimal += d * pow(a, power);
    c /= 10;
    power++;
  }

  if(decimal == 0) {
    cout << 0 << "\n";
  } else {
    vector<int> o;
    while(decimal > 0) {
      o.push_back(decimal % b);
      decimal /= b;
    }
    reverse(o.begin(), o.end());
    for(int i : o) cout << i;
    cout << "\n";
  }
}