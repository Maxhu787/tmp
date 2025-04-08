#include <iostream>
#include <vector>
#include <utility>
#include <numeric>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(int &i : a) cin >> i;

  int x, y;
  for(int i = n-1; i > 0; i--) {
    if(i == n-1) {
      x=a[i-1], y=a[i];
      x*=y;x++;
    } else {
      int temp = x;
      x*=a[i-1];
      x+=y;
      y = temp;
    }
  }
  int gcdV = gcd(x,y);
  x/=gcdV;
  y/=gcdV;
  cout << x << "/" << y << "\n";
  return 0;
}

/*
5 4 2 3
->

(2 * 3 + 1)/3 = 7 / 3
(4 * 7 + 3)/7 = 31 / 7
(5 * 31 + 7)/31 = 162 / 31

*/