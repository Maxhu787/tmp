#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  while(n--) {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string temp;
    vector<int> v;
    while(getline(ss, temp, ',')) {
      if(!temp.empty()) {
        v.push_back(stoi(temp));
      } else {
        v.push_back(0);
      }
    }

    if(s.back() == ',') {
      v.push_back(0);
    }
    reverse(v.begin(), v.end());
    long long o = 0;
    long long m = 1;
    for(int i : v) {
      o += i * m;
      m *= 60;
    }
    cout << o << "\n";
  }
  return 0;
}
