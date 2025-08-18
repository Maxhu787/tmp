#include <iostream>
using namespace std;

typedef long long ll;
const ll mxn = 2*1e5;
ll a[mxn], seg[4*mxn];

void build(int l, int r, int id = 1) {
  if(l == r) {
    seg[id] = a[l];
    return ;
  }
  int mid = (l + r) >> 1;
  build(l, mid, id*2);
  build(mid+1, r, id*2+1);
  seg[id] = seg[id*2] ^ seg[id*2+1];
}

ll query(int ql, int qr, int l, int r, int id = 1) {
  if(ql > r || qr < l) return 0;
  if(ql <= l && qr >= r) return seg[id];

  int mid = (l + r) >> 1;
  return query(ql, qr, l, mid, id*2) ^ query(ql, qr, mid+1, r, id*2+1);
}

int main() {
  int n, q;
  cin >> n >> q; 
  for(int i = 0; i < n; i++) cin >> a[i];
  build(0, n-1);

  while(q--) {
    int bufa, bufb;
    cin >> bufa >> bufb;
    bufa--;bufb--;
    cout << query(bufa, bufb, 0, n-1) << "\n";
  }
  return 0;
}