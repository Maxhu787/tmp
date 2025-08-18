#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
  int n;
  cin >> n;
  while(n--) {
    ll y, x;
    cin >> y >> x;

    ll temp = max(x, y);
    ll value = temp*temp;
    ll newx=temp, newy=1;
    if(temp % 2 == 0) swap(newx, newy);

    ll diffx=abs(newx - x), diffy = abs(newy - y);
    cout << value - diffx - diffy << "\n";
  }
  return 0;
}

/*

y,x -> x,y -> temp=max(x, y)-> t cords -> t cords diffx diffy -> temp*temp - (diffx + diffy)

temp*temp = max value of same L shape

2, 3 -> 3, 2 -> 9 -> (3, 1) -> 1 -> 
1, 1 -> 1, 1 -> 1 -> (1, 1) -> 0 ->
4, 2 -> 2, 4 -> 16 -> (1, 4) -> 1 ->

1 -> 1, 1
4 -> 1, 2
9 -> 3, 1
16 -> 1, 4
25 -> 5, 1
36 -> 1, 6

*/