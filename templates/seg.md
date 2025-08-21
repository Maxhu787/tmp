```cpp
const int mxn = 1e6;
int a[mxn], seg[4*mxn]

pull: seg[id] = seg[id*2] + seg[id*2+1]

void build(l, r, id=1):
  if l == r then seg[id] = a[l]; return ;

  mid = l + r >> 1
  build(l, mid, id*2)
  build(mid+1, r, id*2+1)
  pull;

ll query(ql, qr, l, r, id=1)
  if(ql > r or qr < l) return 0;
  if(ql <= l and qr >= r) return seg[id]; // full overlap

  mid = l + r >> 1
  return query(ql, qr, l, mid, id*2) + query(ql, qr, mid+1, r, id*2+1)

void update(index, value, l, r, id=1) {
  if(index < l or index > r) return ;
  if(l == r) seg[id] = value; return ;

  mid = l + r >> 1
  update(index, value, l, mid, id*2)
  update(index, value, mid+1, r, id*2+1)
  pull;
}

int main() {
  cin n, q;
  for(0, n) cin >> a[i];
  build(0, n-1);
}
```
