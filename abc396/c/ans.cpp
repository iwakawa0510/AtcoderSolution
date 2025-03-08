#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
    cin >> b[i];
    }

    vector<int> w(m);
    for (int i = 0; i < m; ++i) {
    cin >> w[i];
    }

    sort(b.begin(), b.end(), greater<int>());
    sort(w.begin(), w.end(), greater<int>());

    vector<ll> s(n + 1, 0);
    vector<ll> t(m + 1, 0);
    vector<ll> max_t(m + 1, 0);

    for (int i = 0; i < n; ++i) {
    s[i + 1] = s[i] + b[i];
    }

    for (int i = 0; i < m; ++i) {
    t[i + 1] = t[i] + w[i];
    max_t[i + 1] = max(max_t[i], t[i + 1]);
    }

    ll ans = 0;
    for (int i = 0; i <= n; ++i) {
    ans = max(ans, s[i] + max_t[min(i, m)]);
    }

    cout << ans << endl;

    return 0;
}
