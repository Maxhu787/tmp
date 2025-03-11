#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    map<char, int> s;
    map<int, char> t;
    string alien_number, source_language, target_language;
    cin >> alien_number >> source_language >> target_language;
    
    for(int i = 0; i < source_language.size(); i++) {
      s[source_language[i]] = i;
    }
    for(int i = 0; i < target_language.size(); i++) {
      t[i] = target_language[i];
    }
    
    vector<int> temp;
    for(int i = 0; i < alien_number.size(); i++) {
      temp.push_back(s[alien_number[i]]);
    }
    reverse(temp.begin(), temp.end());
    
    int ten=0, pow=1;
    for(int i : temp) {
      ten += i * pow;
      pow *= source_language.length();
    }

    
    vector<int> answer;

    while(ten > 0) {
      answer.push_back(ten % target_language.length());
      ten /= target_language.length();
    }
    reverse(answer.begin(), answer.end());
    cout << "Case #" << i+1 << ": ";
    for(int i : answer) {
      cout << target_language[i];
    }
    cout << "\n";
  }
  return 0;
}