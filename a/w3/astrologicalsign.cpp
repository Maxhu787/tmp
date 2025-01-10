#include <iostream>
#include <string>
using namespace std;

const string M[] = {"", "Jan", "Feb", "Mar", "Apr", 
"May", "Jun", "Jul", "Aug", 
"Sep", "Oct", "Nov", "Dec"};
const int D[] = {120, 219, 320, 420, 
520, 621, 722, 822, 
921, 1022, 1122, 1221, 9999};
const string N[] = {"Capricorn", "Aquarius", "Pisces", "Aries", 
"Taurus", "Gemini", "Cancer", "Leo", 
"Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"};


int str_to_month(string& s) {
  for(int i = 1; i <= 12; i++) {
    if(s == M[i]) {
      return i;
    }
  }
  return -1;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    string month;
    int day;
    cin >> day >> month;
    int n = str_to_month(month) * 100 + day;

    int o;
    for(o = 0; n > D[o]; o++);
    cout << N[o] << "\n";
  }
  
  return 0;
}