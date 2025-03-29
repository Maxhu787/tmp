#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(char i : s) {
      if(i == 'H' || i == 'Q' || i == '9') {
        cout << "YES\n";
        return 0;
      }   
    }

    cout << "NO\n";
    return 0;
}
