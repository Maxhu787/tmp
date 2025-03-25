#include <iostream>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	bool found = false;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp == 0) a++;
		if (temp == 1) b++;
		if (temp == 2) c++;
		if (temp == 3) d++;
		if (temp == 5) e++;

		if (!found && a >= 3 && b >= 1 && c >= 2 && d >= 1 && e >= 1) {
			cout << i + 1 << "\n";
			found = true;
		}
	}
	if (!found) {
		cout << 0 << "\n";
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
