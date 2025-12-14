#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    int test = i;
    vector<int> o;
    while(test != 0) {
      o.push_back(test % 2);
      test /= 2;
    }
    for(int j = o.size()-1; j >= 0; j--) cout << o[j];
    cout << "\n";
  }
  return 0;
}

/*

*/