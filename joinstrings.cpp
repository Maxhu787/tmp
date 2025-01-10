#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v;
    vector<int> next(n, -1);
    vector<int> head(n);
    vector<int> tail(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        head[i] = i;
        tail[i] = i;
    }

    for(int i = 0; i < (n - 1); i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        next[tail[a]] = head[b];
        tail[a] = tail[b];
        head[b] = -1;
    }

    string result;
    int current = head[0];
    while (current != -1) {
        result += v[current];
        current = next[current];
    }

    cout << result << "\n";


    return 0;
}


/*
3
howis
this
practicalexam

next[tail[a]] = head[b];
tail[a] = tail[b];
                    next head tail
0	"howis"	              -1 0 0
1	"this"	              -1 1 1
2	"practicalexam"	      -1 2 2

(0, 1)
0	"howis"	               1 0 1
1	"this"	              -1 1 1
2	"practicalexam"	      -1 2 2

(0, 2)
0	"howis"	               1 0 2
1	"this"	               2 1 1
2	"practicalexam"	      -1 2 2
*/
