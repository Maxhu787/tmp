#include <iostream>
using namespace std;
#define OK ios_base::sync_with_stdio(0);
#define LOL cin.tie(0); cout.tie(0);

signed main(){
    OK LOL
    
    int a, b;
    cin >> a >> b;

    int diff = (b-a + 540) % 360 - 180;
    if(diff == -180) diff = 180;
    cout << diff << "\n";
    return 0;
}