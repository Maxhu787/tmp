#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  map<string, char> m = {
  {"clank", 'a'},
  {"bong", 'b'},
  {"click", 'c'},
  {"tap", 'd'},
  {"poing", 'e'},
  {"clonk", 'f'},
  {"clack", 'g'},
  {"ping", 'h'},
  {"tip", 'i'},
  {"cloing", 'j'},
  {"tic", 'k'},
  {"cling", 'l'},
  {"bing", 'm'},
  {"pong", 'n'},
  {"clang", 'o'},
  {"pang", 'p'},
  {"clong", 'q'},
  {"tac", 'r'},
  {"boing", 's'},
  {"boink", 't'},
  {"cloink", 'u'},
  {"rattle", 'v'},
  {"clock", 'w'},
  {"toc", 'x'},
  {"clink", 'y'},
  {"tuc", 'z'},
  {"whack", ' '},
  };
  vector<char> o;
  bool caps=false, capslock=false;

  while(n--) {
    string s;
    cin >> s;

    if(s == "bump") {
      capslock=!capslock;
    } else if(s == "pop") {
      if(!o.empty()) {
        o.pop_back();
      }
    } else if(s == "dink") {
      caps=true;
    } else if(s == "thumb") {
      caps=false;
    } else {
      if((caps && !capslock) || (!caps && capslock)) {
        o.push_back(toupper(m[s]));
      } else {
        o.push_back(m[s]);
      }
    }
  }

  for(int i = 0; i < o.size(); i++) {
    cout << o[i];
  }
  cout << "\n";
  return 0;
}