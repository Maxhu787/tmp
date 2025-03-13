#include <iostream>
#include <stack>
#include <utility>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(int &i : a) {
    cin >> i;
  }

  stack<int> st;
  for(int i = 0; i < n; i++) {
    while(!st.empty() && a[st.top()] >= a[i]) {
      st.pop();
    }
    
    if(st.empty()) {
      cout << "0 ";
    } else {
      cout << st.top() + 1 << " ";
    }

    st.push(i);
  }


  cout << "\n";
  return 0;
}