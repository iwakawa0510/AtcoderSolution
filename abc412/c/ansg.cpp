#include <iostream>
#include <vector>
// #include <iomanip> // 未使用
// #include <algorithm> // 模範解答では使用。最大値を探すのに便利
// #include <cmath> // 未使用
// #include <array> // 未使用
// #include <string> // 未使用
// #include <set> // 未使用
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    vector<bool> used(n, false);
    int ans = 1;
    int last_idx = 0;
    while (true) {
        if (a[last_idx] * 2LL >= a[n - 1]) {
            ans++;
            break;
        }
        int next_idx = -1;
        for (int i = 1; i < n; i++) {
            if (used[i]) continue;
            if (a[last_idx] * 2LL >= a[i]) {
                if (next_idx == -1 || a[i] > a[next_idx]) {
                    next_idx = i;
                }
            }
        }
        if (next_idx == -1) {
            cout << -1 << endl;
            return;
        }
        ans++;
        last_idx = next_idx;
        used[last_idx] = true;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

