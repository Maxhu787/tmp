#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  
  vector<int> people(n), room(m);
  for(int &i : people) cin >> i;
  for(int &i : room) cin >> i; 

  sort(people.begin(), people.end());
  sort(room.begin(), room.end());

  int i=0, j=0, o=0;
  while(i < n && j < m) {
    int low = people[i]-k;
    int upp = people[i]+k;
    if(room[j] >= low && room[j] <= upp) {
      o++;
      i++;
      j++;
    } else if(room[j] < low) {
      j++;
    } else {
      i++;
    }
  }
  cout << o << "\n";

  return 0;
}