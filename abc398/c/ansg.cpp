#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i].first;
        p[i].second = i + 1;
    }

    sort(p.begin(), p.end());

    int ans = -1;
    int mx = -1;

    if (n == 1) {
        ans = 1;
    } else {
        if (p[0].first != p[1].first) {
            ans = p[0].second;
            mx = p[0].first;
        }
        for (int i = 1; i < n - 1; ++i) {
            if (p[i].first != p[i - 1].first && p[i].first != p[i + 1].first) {
                if (p[i].first > mx) {
                    mx = p[i].first;
                    ans = p[i].second;
                }
            }
        }
        if (p[n - 1].first != p[n - 2].first) {
            if (p[n - 1].first > mx) {
                mx = p[n - 1].first;
                ans = p[n - 1].second;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
