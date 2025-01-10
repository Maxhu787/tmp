#include <iostream>
using namespace std;

const int WIN = 2;
const int TIE = 1;
const int LOSE = 0;
 
const int SCORE[3][3] = {
	{TIE, WIN, LOSE},  // S -> SPR
	{LOSE, TIE, WIN},  // P -> SPR
	{WIN, LOSE, TIE},  // R -> SPR
};

int main() {
  int n, t;
  cin >> n;
  char s[n];
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  cin >> t;
  while(t--) {
    
  }
  return 0;
}