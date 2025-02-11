#include <iostream>
using namespace std;

int main() {
  int a[10]={0};
  int max=0, n;

  for(int i = 0; i < 3; i++) {
    cin >> n;
    a[n-1]++;
  }

  for(int i = 0; i < 10; i++) {
    if(a[i] > max) {
      max = a[i];
    }
  }
  cout << max << " ";

  for(int i = 9; i >= 0; i--) {
    if(a[i] != 0) {
      cout << i+1 << " ";
    }
  }

  cout << "\n";
  return 0;
}