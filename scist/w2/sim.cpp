#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  while(n--) {
    deque<char> d;
    string s;
    getline(cin, s);

    bool home=false;
    int counter = 0;
    for(int i = 0; i < s.length(); i++) {
      if(s[i] == '[') {
        home = true;
      } else if(s[i] == ']') {
        home = false;
      } else if(s[i] == '<') {
        if(!home && !d.empty()) {
          d.pop_back();
        }
      } else {
        if(!home) {
          d.push_back(s[i]);
          counter = 0;
        } else {
          d.insert(d.begin()+counter, s[i]);
          counter++;
        }
      }
    }

    for(int i = 0; i < d.size(); i++) {
      cout << d[i];
    }
    cout << "\n";
  }

  return 0;
}