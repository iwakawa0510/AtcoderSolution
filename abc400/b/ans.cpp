#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, m;
	cin >> n >> m;
	ll cur = 1, sum = 0;
	for (int i = 0; i <= m; i++) {
		sum += cur;
		if (sum > 1'000'000'000) {
			cout << "inf\n";
			return 0;
		}
		cur *= n;
	}
	cout << sum << '\n';
}
