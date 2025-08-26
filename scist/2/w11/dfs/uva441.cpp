#include <iostream>
using namespace std;

const int mxn = 1e5;
int k, a[mxn];

void dfs(int index, int count, bool subset[]) {
  if(count == 6) {
    int count = 0;
    for(int i = 0; i < k; i++) {
      if(subset[i]) {
        count++;
        if(count == 6) {
          cout << a[i];
        } else {
          cout << a[i] << " ";
        }
      }
    }
    cout << "\n";
    return;
  }
  
  if(index == k) return;

  subset[index] = true;
  dfs(index+1, count+1, subset);
  subset[index] = false;
  dfs(index+1, count, subset);
}

int main() {
  bool first = true;
  while(cin >> k && k != 0) {
    if(!first) cout << "\n";
    for(int i = 0; i < k; i++) cin >> a[i];
    bool subset[mxn] = {0};
    dfs(0, 0, subset);
    first = false;
  }
  return 0;
}

/*

check if index == k too, 
cause something like
false, false, false, false, false, true, true
only two selected, but theres still four more to be selected
but it cleary doesnt have any elements left and it goes overbound
*/ 