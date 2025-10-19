#include <iostream>
#include <algorithm>
using namespace std;

struct item {
  int weight;
  int frequency;
};

bool cmp(item a, item b) {
  return;
}

int main() {
  int n;
  while(cin >> n) {
    item items[n];
    for(int i = 0; i < n; i++) cin >> items[i].weight;
    for(int i = 0; i < n; i++) cin >> items[i].frequency;

    sort(items, items+n, cmp);
    for(int i = 0; i < n; i++) {
      ;
    }
  }
  return 0;
}