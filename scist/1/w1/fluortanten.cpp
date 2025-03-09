#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int a[n];
  a[0] = 0;

  bool metZero = false;
  long long original = 0;
  for(int i = 0; i < n; i++) {
    int t;
    cin >> t;
    if(t == 0) {
      metZero = true;
    } else {
      if(metZero) {
        a[i] = t;
        original += t * (i + 1);
      } else {
        a[i+1] = t;
        original += t * (i + 2);
      }
    }
  }
  
  long long minSum = a[1];
  long long currentSum = 0;
  for(int i = 1; i < n; i++) {
    currentSum += a[i];
    minSum = min(minSum, currentSum);
  }
  long long temp = min((long long)0, minSum);

  cout << original - temp << "\n";
  return 0;
}

/*

0 -> 0 -8 1 1 5  =  0*1 + -8*2 + 1*3 + 1*4 + 5*5  = 16 - 0 = 16
1 -> -8 0 1 1 5  = -8*1 +  0*2 + 1*3 + 1*4 + 5*5  = 16 - (-8) = 24
2 -> -8 1 0 1 5  = -8*1 +  1*2 + 0*3 + 1*4 + 5*5  = 16 - (-8 + 1) = 23
3 -> -8 1 1 0 5  = -8*1 +  1*2 + 1*3 + 0*4 + 5*5  = 16 - (-8 + 1 + 1) = 22
4 -> -8 1 1 5 0  = -8*1 +  1*2 + 1*3 + 5*4 + 0*5  = 16 - (-8 + 1 + 1 + 5) = 17

先處理輸入 讓零在 a[0]，輸入時順便計算初始和 (original_sum)
再窮舉0 1~n 的位置，每往前移一格 總和 = original_sum - (在零以前的數字總和)

總和的變數記得用 long long
*/
