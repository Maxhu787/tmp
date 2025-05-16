#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int cntA[46]={0}, cntB[46]={0}, cntC[46]={0};
  
  for(int i = 0; i < n; i++) {int t; cin >> t; cntA[t % 46]++;}
  for(int i = 0; i < n; i++) {int t; cin >> t; cntB[t % 46]++;}
  for(int i = 0; i < n; i++) {int t; cin >> t; cntC[t % 46]++;}

  long long o = 0;
  for(int a = 0; a < 46; a++) {
    for (int b = 0; b < 46; ++b) {
      for (int c = 0; c < 46; ++c) {
        if((a + b + c) % 46 == 0) {
          o += (long long)cntA[a] * cntB[b] * cntC[c];
        }
      }
    }
  }
  cout << o << "\n";
  return 0;
}

// ok to brute force 
// since n length array gets turned into 0~45 modulo
// O(n)