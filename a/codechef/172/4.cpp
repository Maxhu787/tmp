#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  while(n--) {
    string a, b;
    cin >> a >> b;
    vector<char> av;

    int aa[26]={0}, bb[26]={0};

    for(int i = 0; i < a.length(); i++) {
      aa[a[i]-'a']++;
      av.push_back(a[i]);
    }
    for(int i = 0; i < b.length(); i++) {
      bb[b[i]-'a']++;
    }
    bool ee = true;
    for(int i = 0; i < b.length(); i++) {
      if(aa[b[i]-'a'] < bb[b[i]-'a']) {
        cout << -1 << "\n";
        ee = false;
      }
    }
    if(!ee) {
      continue;
    }
    int o=0;
    for(int i = 0; i < 26; i++) {
      while(aa[i] > bb[i]) {
        for (size_t j = 0; j < av.size(); j++) {
          if (av[j] == char(i + 'a')) {
            o += j + 1;
            av.erase(av.begin() + j);
            aa[i]--;
            break;
          }
        }
      }
    }
    cout << o << "\n";
  }
  return 0;
}