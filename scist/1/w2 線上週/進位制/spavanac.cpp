#include <iostream>
using namespace std;

int main() {
  int h, m;
  cin >> h >> m;

  int t = m - 45;
  if(t >= 0) {
    cout << h << " " << t << "\n";
  } else {
    h--;
    if(h >= 0) {
      cout << h << " " << 60 + t << "\n";
    } else {
      cout << 24 + h << " " << 60 + t << "\n";
    }
  }
  return 0;
}