#include <iostream>
#include <string>
#include <cctype>
#include <unordered_set>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  unordered_set<string> st; 
  while(n--) {
    string s;
    getline(cin, s);
    for(char &i : s) {
      if(i == ' ') i = '-';
      if(isupper(i)) i = tolower(i);
    }
    st.insert(s);
  }
  cout << st.size() << "\n";
  return 0;
}