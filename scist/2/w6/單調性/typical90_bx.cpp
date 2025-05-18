#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n], d=0;
  for(int i = 0; i < n; i++) {cin >> a[i]; d += a[i];}

  if(d % 10 == 0) {
    int target = (d*9)/10;
    int left = 1, right = 1;
    int current = a[1];

    while(right < n-1) {
      if (current == target) {
        cout << "Yes" << "\n";
        return 0;
      }
      
      if(current < target) {
        right++;
        if(right < n) current += a[right];
      } else {
        current -= a[left];
        left++;
        if(left > right && left < n) {
          right = left;
          current = a[left];
        }
      }
    }
    if(current == target) {
      cout << "Yes" << "\n";
      return 0;
    }
  } else {
    cout << "No" << "\n";
    return 0;
  }
  cout << "No" << "\n";
  return 0;
}
