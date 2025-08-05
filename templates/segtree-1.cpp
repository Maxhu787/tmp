#include <iostream>
using namespace std;

const int mxn = 1e5;
int a[mxn];
int seg[4*mxn];

void pull(int id) {
  seg[id] = seg[id * 2] + seg[id * 2 + 1];
}

void build(int l, int r, int id = 1) {
  if(l == r) {
    seg[id] = a[l];
    return ;
  }
  int m = (l+r)/2;
  build(l, m, 2*id);
  build(m+1, r, 2*id + 1);
  pull(id);
}

int query(int ql, int qr, int l, int r, int id = 1) {
  if(qr < l || r < ql) return 0; // no overlap
  if(ql <= l && r <= qr) return seg[id]; // full overlap
  int m = (l+r) / 2;
  return query(ql, qr, l, m, id*2) + query(ql, qr, m+1, r, id*2+1);
  // partial overlap
}

void update(int p, int v, int l, int r, int id = 1) {
  // p: position, v: value
  if(p < l || r < p) return;
  if(l == r) {
    seg[id] = v;
    return;
  }
  int m = (l + r) / 2;
  update(p, v, l, m, id*2);
  update(p, v, m+1, r, id*2+1);
  pull(id);
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  build(0, n - 1);

  int q;
  cin >> q;
  while (q--) {
    int type;
    cin >> type;
    if (type == 1) {
      int l, r;
      cin >> l >> r;
      l--;r--;
      cout << query(l, r, 0, n - 1) << "\n";
    } else if (type == 2) {
      int p, v;
      cin >> p >> v;
      p--;
      update(p, v, 0, n - 1);
    }
  }
}