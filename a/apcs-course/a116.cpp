#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if(b == 0) return a;
  return gcd(b, a%b);
}

int lcm(int a, int b) {
  return abs(a * b) / gcd(a, b);
}


bool isLeap(int y) {
  return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int daysInMonth(int y, int m) {
  int d[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  if (m == 2 && isLeap(y)) return 29;
  return d[m - 1];
}

int main() {
  int n;
  cin >> n;

  long long cycle;
  cin >> cycle;
  for (int i = 1; i < n; i++) {
    long long x;
    cin >> x;
    cycle = lcm(cycle, x);
  }

  int y, m, d;
  char slash;
  cin >> y >> slash >> m >> slash >> d;

  long long add = cycle;
  while (add--) {
    d++;
    if (d > daysInMonth(y, m)) {
      d = 1;
      m++;
      if (m > 12) {
        m = 1;
        y++;
      }
    }
  }

  cout << y << "/";
  if (m < 10) cout << "0";
  cout << m << "/";
  if (d < 10) cout << "0";
  cout << d << "\n";

  return 0;
}
