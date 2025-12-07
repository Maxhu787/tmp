#include <iostream>
#include <vector>
#include <utility>
using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  
  for(ll n = 1; n <= t; n++) {
    ll o = (n*n)*(n*n-1)/2 - 4*((n-1)*(n-2));
    cout << o << "\n";
  }
  return 0;
}

/*

solution: total - attacking = safe positions

we first calculate the total number of possible ways of placing two knights on the board.

n*n squares to place knight A,
n*n-1 squares left to place knight B,
devide by 2 because having knight A at x1, y1, and knight B at x2, y2
is the same as having knight B at x1, y1, and knight A at x2, y2

so we come up with => (n*n)(n*n-1)/2

then we calculate how many attacking positions.
count how many 2x3 and 3x2 rectangles can fit inside the sqaure,
because when two knights are put inside a 2x3 or 3x2 rectangle's corners,
they can attack each other, also there are four corners, meaning two solutions, so *2
(because there are two ways of placing the knights diagnoly)

for 2x3 rectangles: 
1 1 1 0     0 1 1 1     0 0 0 0     0 0 0 0     0 0 0 0     0 0 0 0
1 1 1 0     0 1 1 1     1 1 1 0     0 1 1 1     0 0 0 0     0 0 0 0
0 0 0 0     0 0 0 0     1 1 1 0     0 1 1 1     1 1 1 0     0 1 1 1
0 0 0 0     0 0 0 0     0 0 0 0     0 0 0 0     1 1 1 0     0 1 1 1

count the top left corner, so we can know how many we can fit

x x 0 0
x x 0 0
x x 0 0
0 0 0 0

so n-2 on the x axis
and n-1 on the y axis
so there are (n-2) * (n-1) solutions for 2x3

same goes to 3x2 rectangles
which is quite similar -> (n-1) * (n-2)

so if we remeber from earlier, we counted four corners, so we need to *2 the answer,
-> 2[<3x2s> + <2x3s>]
-> 2*[(n-2) * (n-1) + (n-1) * (n-2)]
-> 2*(2*((n-2) * (n-1)))
-> 4((n-2) * (n-1))

final answer
=> (n*n)(n*n-1)/2 - 4((n-2) * (n-1))

and remeber to use long long cause the answers WILL get big

*/