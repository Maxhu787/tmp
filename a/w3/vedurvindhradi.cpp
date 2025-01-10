#include <iostream>
#include <string>
using namespace std;

int main() {
  double a[13] = {0.2, 1.5, 3.3, 5.4, 7.9, 10.7, 13.8, 
  17.1, 20.7, 24.4, 28.4, 32.6};
  string b[12] = { "Logn", "Andvari", "Kul", "Gola", "Stinningsgola", 
  "Kaldi", "Stinningskaldi", "Allhvass vindur", "Hvassvidri", 
  "Stormur", "Rok", "Ofsavedur"};

  double n;
  cin >> n;

  if(n >= 32.7) {
    cout << "Farvidri" << "\n";
    return 0;
  }
  for(int i = 0; i < 12; i++) {
    if(n <= a[i]) {
      cout << b[i] << "\n";
      return 0;
    }
  }
}