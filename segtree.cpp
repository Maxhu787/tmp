#include <iostream>
using namespace std;

const int mxn = 1e5;
int a[mxn];
struct Node {
  int data, tag;
};
Node seg[4 * mxn];

int get_val(int l, int r, int id) {
  return seg[id].data + (r - l + 1) * seg[id].tag;
}

void push(int l, int r, int id) {
  if (seg[id].tag != 0 && l != r) {
    int m = (l + r) >> 1;
    seg[id * 2].tag += seg[id].tag;
    seg[id * 2 + 1].tag += seg[id].tag;
  }
  seg[id].data = get_val(l, r, id);
  seg[id].tag = 0;
}

void pull(int l, int r, int id) {
  int m = (l + r) >> 1;
  seg[id].data = get_val(l, m, id * 2) + get_val(m + 1, r, id * 2 + 1);
}

void build(int l, int r, int id = 1) {
  seg[id].tag = 0;
  if (l == r) {
    seg[id].data = a[l];
    return;
  }
  int m = (l + r) >> 1;
  build(l, m, id * 2);
  build(m + 1, r, id * 2 + 1);
  pull(l, r, id);
}

int query(int ql, int qr, int l, int r, int id = 1) {
  if (qr < l || r < ql) return 0;
  if (ql <= l && r <= qr) return get_val(l, r, id);
  push(l, r, id);
  int m = (l + r) >> 1;
  return query(ql, qr, l, m, id * 2) + query(ql, qr, m + 1, r, id * 2 + 1);
}

void update(int ql, int qr, int v, int l, int r, int id = 1) {
  if (qr < l || r < ql) return;
  if (ql <= l && r <= qr) {
    seg[id].tag += v;
    return;
  }
  push(l, r, id);
  int m = (l + r) >> 1;
  update(ql, qr, v, l, m, id * 2);
  update(ql, qr, v, m + 1, r, id * 2 + 1);
  pull(l, r, id);
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
      l--; r--;
      cout << query(l, r, 0, n - 1) << "\n";
    } else if (type == 2) {
      int l, r, v;
      cin >> l >> r >> v;
      l--; r--;
      update(l, r, v, 0, n - 1);
    }
  }
}
