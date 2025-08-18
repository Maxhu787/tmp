#include <iostream>
using namespace std;

typedef long long ll;
const ll mxn = 2*1e5;
ll a[mxn], seg[4*mxn];

void build(int l, int r, int id=1) {
  if(l == r) {
    seg[id] = a[l];
    return ;
  }
  int m = (l + r) >> 1;
  build(l, m, id*2);
  build(m+1, r, id*2+1);
  seg[id] = seg[id*2] + seg[id*2+1];
}

ll query(int ql, int qr, int l, int r, int id=1) {
  if(qr < l || ql > r) return 0;
  if(ql <= l && qr >= r) return seg[id];
  int m = (l + r) >> 1;
  return query(ql, qr, l, m, id*2) + query(ql, qr, m+1, r, id*2+1);
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

int main() {
  int n, q;
  cin >> n >> q;
  for(int i = 0; i < n; i++) cin >> a[i];
  build(0, n-1);

  while(q--) {
    int bufa, bufb, bufc;
    cin >> bufa >> bufb >> bufc;
    if(bufa == 1) {
      bufb--;
      update(bufb, bufc, 0, n-1);
    } else {
      bufb--;bufc--;
      cout << query(bufb, bufc, 0, n-1) << "\n";
    }
  }
  return 0;
}
