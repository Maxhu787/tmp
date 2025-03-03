int 10^9
long long 10^18

https://shengyu7697.github.io/std-sort/
https://shengyu7697.github.io/std-max/

g++ 14.cpp -std=c++11
https://shengyu7697.github.io/std-min/

#include <utility>
pair<int, int>

#include <algorithm>
find(v.begind(), v.end(), x) != v.end()

#include <climits>
LLONGMAX

```
vector<pair<int, int>> vec = {{1, 3}, {2, 1}, {3, 2}};
sort(vec.begin(), vec.end(), [](pair<int, int> a, pair<int, int> b) {
  return a.second < b.second;
});
```

```
for (auto p : vec) {
  cout << "(" << p.first << ", " << p.second << ") ";
}
```

sim.cpp
