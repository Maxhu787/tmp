#include <iostream>
using namespace std;

int main() {
  int startH, startM, endH, endM, h, m;
  cin >> startH >> startM >> endH >> endM;
  cin >> h >> m;
  
  if ((h > startH || (h == startH && m >= startM)) && (h < endH || (h == endH && m <= endM))) {
    cout << "Learning" << endl;
  } else {
    cout << "Break" << endl;
  }
    

  return 0;
}