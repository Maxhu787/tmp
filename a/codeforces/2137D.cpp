#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define OK cin.tie(0);cout.tie(0);
#define LOL ios::sync_with_stdio(0);
typedef pair<int,int> pii;
typedef long long ll;

int main() {
	OK LOL
	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		vector<int> b(n);
		for(int i = 0; i < n; i++) cin >> b[i];
		map<int, vector<int>> groups;
		for(int i = 0; i < n ;i++) groups[b[i]].push_back(i);
		vector<int> a(n);
		int cur=1;
		bool ok=true;
		for(auto &p:groups) {
			int freq=p.first;
			auto &positions = p.second;
			if(positions.size() % freq != 0) {
				ok = false;
				break;
			}
			for(size_t i=0; i < positions.size(); i++) {
				a[positions[i]] = cur;
				if((i+1) % freq == 0) cur++;
			}
		}
		if(!ok) cout << -1 << "\n";
		else {
			for(int i:a) cout << i << " ";
			cout << "\n";
		}
	}
	return 0;
}
