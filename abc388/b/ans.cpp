#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, d;
	cin >> n >> d;
	vector<int> t(n), l(n);
	for (int i = 0; i < n; i++) cin >> t[i] >> l[i];
	for (int k = 1; k <= d; k++) {
		int ans = 0;
		for (int i = 0; i < n; i++) ans = max(ans, t[i] * (l[i] + k));
		cout << ans << '\n';
	}
}