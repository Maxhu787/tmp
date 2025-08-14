#include <iostream>
using namespace std;

const int mxn = 1e6;
int a[mxn], seg[4*mxn];

void build(int l, int r, int id=1) {
  if(l == r) {
    seg[id] = a[l];
    return;
  }
  int m = (l + r) >> 1;
  build(l, m, id*2);
  build(m+1, r, id*2+1);
  seg[id] = seg[id*2] + seg[id*2+1];
}

int query(int ql, int qr, int l, int r, int id = 1) {
  if(ql > r || qr < l) return 0;
  if(ql <= l && qr >= r) return seg[id];
  int mid = (l + r) >> 1;
  return query(ql, qr, l, mid, id*2) + query(ql, qr, mid+1, r, id*2+1);
}

void update(int index, int value, int l, int r, int id = 1) {
  if(index < l || index > r) return ;
  if(l == r) {
    seg[id] = value;
    return ;
  }
  int m = (l + r) >> 1;
  update(index, value, l, m, id*2);
  update(index, value, m+1, r, id*2+1);
  seg[id] = seg[id*2] + seg[id*2+1];
}