#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  map<long long, int> original;
  for(int i = 0; i < k; i++) {
    original[a[i]]++;
  }
  
  int originalV=0, originalK;
  for(int i = 0; i < k; i++) {
    if(original[a[i]] >= originalV) {
      originalK = a[i];
      originalV = original[a[i]];
    }
  }

  long long o = originalK * originalV;
  for(int i = 0; i < n-(k-1); i++) {
    long long temp=0;
    if(i != 0) {
      original[a[i+(k-1)]]++;
      original[a[i-1]]--;

      if(((original[a[i+(k-1)]] * a[i+(k-1)]) < (originalK * originalV)) && (a[i-1] != originalK)) {
        temp = originalK * originalV;
      } else {
        for(int j = i; j <= i+(k-1); j++) {
          if((a[j] * original[a[j]]) > temp) {
            temp = a[j] * original[a[j]];
            originalK = a[j];
            originalV = original[a[j]];
          }
        }
      }
      o += temp;
    }
  }
  cout << o << "\n";
}