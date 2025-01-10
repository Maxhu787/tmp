#include <iostream>
#include <stack>
using namespace std;

int main() {
  int n;
  stack<char> s;
  cin >> n;
  
  while(n--) {
    char t;
    cin >> t;

    if(t == '(') {
      s.push(')');
    } else if(t == '[') {
      s.push(']');
    } else if(t == '{') {
      s.push('}');
    } else if(t == ')' || t == ']' || t == '}') {
      if(s.empty() || s.top() != t) {
        cout << "Invalid" << "\n";
        return 0;
      }
      s.pop();
    }
  }
  if(s.empty()) {
    cout << "Valid" << "\n";
  } else {
    cout << "Invalid" << "\n";
  }

  return 0;
}