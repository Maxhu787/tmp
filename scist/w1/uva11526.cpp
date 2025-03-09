#include <iostream>
#include <cmath>
using namespace std;

long long H(long long n) {
    long long res=0;
    int rrt = sqrt(n);
    for(int i = 1; i <= rrt; ++i) {
        res = res + ((n/i) + (n/i));
    }
    res = res - (rrt * rrt);
    return res;
}

// long long H(int n){
//   long long res = 0;
//   for( int i = 1; i <= n; i=i+1 ){
//     res = (res + n/i);
//   }
//   return res;
// }

int main()
{
    int a;
    cin >> a;
    while(a--)
    {
       long long n;
        cin >> n;
        long long ans = H(n);
        cout<< ans <<endl;
    }
    return 0;
}