#include <iostream>
using namespace std;

const int mxn = 2e5+3;
int l=0, r=mxn, mid;

bool che(int tg) {
  // 寫判斷的程式
  // 縮左界回傳true
}

int bin() {
  while(l != r) {
    mid = (l + r) >> 1;
    // mid = (l + r) / 2;
    if(che(mid)) {
      l = mid + 1; // 左閉右開
    } else {
      r = mid;
    }
  }
  // 結束後的r=l，值在分界點右側，可以加個-1讓值在分界點左側
  return l-1;
}