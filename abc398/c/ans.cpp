// #define MULTI
// #define USACO

#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int> > x;
int N, ans;

void solve() {
	cin >> N;
    x.assign(N, {0, 0});
    for(int i = 0; i < N; ++i) {
        cin >> x[i].first;
        x[i].second = i + 1;
    }

    sort(x.begin(), x.end());

    if(N == 1) {
        cout << 1 << '\n';
        return;
    }

    ans = -1;
    if(x[0].first != x[1].first) {
        ans = x[0].second;
    }

    for(int i = 1; i + 1 < N; ++i) {
        if(x[i].first != x[i - 1].first && x[i].first != x[i + 1].first) {
            ans = x[i].second;
        }
    }

    if(x[N - 1].first != x[N - 2].first) {
        ans = x[N - 1].second;
    }

    cout << ans << '\n';
}

void pre_calc() {
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	pre_calc();
	
	#ifdef USACO
	freopen("name.in", "r", stdin);
	freopen("name.out", "w", stdout);
	#endif

	#ifdef MULTI
	int _T;
	cin >> _T;
	while(_T--) {
		solve();
	}
	#else
	solve();
	#endif
	return 0;
}
