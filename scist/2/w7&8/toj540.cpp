#include <iostream>
using namespace std;

const int mxn = 2e5;
int a[mxn][3];

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }
}