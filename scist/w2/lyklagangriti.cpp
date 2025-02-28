#include <iostream>
#include <string>
using namespace std;

string findPassword(const string& input) {
    string left, right;

    for (size_t i = 0; i < input.size(); ++i) {
        char ch = input[i];
        
        if (ch == 'L') {
            if (!left.empty()) {
                right.push_back(left.back());
                left.pop_back();
            }
        } else if (ch == 'R') {
            if (!right.empty()) {
                left.push_back(right.back());
                right.pop_back();
            }
        } else if (ch == 'B') {
            if (!left.empty()) {
                left.pop_back();
            }
        } else {
            left.push_back(ch);
        }
    }
    return left + string(right.rbegin(), right.rend());
}

int main() {
    string input;
    cin >> input;
    cout << findPassword(input) << endl;
    return 0;
}
