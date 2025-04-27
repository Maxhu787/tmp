#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  cout << ".";
  for(int i = 0; i < s.length(); i++) {
    if(i % 3 == 2) {
      cout << ".*..";
    } else {
      cout << ".#..";
    }
  }
  cout << "\n";
  cout << ".";
  for(int i = 0; i < s.length(); i++) {
    if(i % 3 == 2) {
      cout << "*.*.";
    } else {
      cout << "#.#.";
    }
  }
  cout << "\n";

  cout << "#";
  for(int i = 0; i < s.length(); i++) {
    if(i % 3 == 1 && (i+1 != s.length())) {
      cout << "." << s[i] << ".*";
    } else if(i % 3 == 2) {
      cout << "." << s[i] << ".*";
    } else {
      cout << "." << s[i] << ".#";
    }
  }
  cout << "\n";

  cout << ".";
  for(int i = 0; i < s.length(); i++) {
    if(i % 3 == 2) {
      cout << "*.*.";
    } else {
      cout << "#.#.";
    }
  }
  cout << "\n";
  cout << ".";
  for(int i = 0; i < s.length(); i++) {
    if(i % 3 == 2) {
      cout << ".*..";
    } else {
      cout << ".#..";
    }
  }
  cout << "\n";

  return 0;
}