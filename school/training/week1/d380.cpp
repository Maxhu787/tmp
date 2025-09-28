#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

const int mxn = 1e3;
int a[mxn];
string bufa, bufb;

int main() {
  while(cin >> bufa >> bufb) {
    memset(a, 0, sizeof(a));
    if(bufa.size() < bufb.size()) swap(bufa, bufb);

    int offset = 0;
    for(int i = bufb.size()-1; i >= 0; i--) {
      int prev = 0, index=0;
      for(int j = bufa.size()-1; j >= 0; j--) {
        int ta = bufa[j] - '0';
        int tb = bufb[i] - '0';
        a[index + offset] += (ta * tb + prev) % 10;
        prev = (ta * tb + prev) / 10;
        index++;
      }
      a[index + offset] += prev;
      offset++;
    }
    for(int i = 0; i < mxn; i++) {
      if(a[i] >= 10) {
        int tmp = a[i];
        a[i] = a[i] % 10;
        a[i+1] += tmp/10;
      }
    }
    bool stillzero = true;
    for(int i = mxn-1; i >= 0; i--) {
      if(a[i] != 0) stillzero = false;
      if(!stillzero) cout << a[i];
    }
    cout << (stillzero ? "0\n" : "\n");
  }
  return 0;
}

/*
2 222222222222222222222222
12345 1111111

  2222
    35
 11110
 6666
 77770


      12345
    1111111

    5555555
   4444444
  3333333
 2222222
1111111
13716665295 

*/