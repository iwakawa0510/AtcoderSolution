#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> num(m + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        num[a[i]]++;
    }

    // 最初に条件を満たしているか判定
    bool full = true;
    for (int j = 1; j <= m; j++) {
        if (num[j] == 0) {
            full = false;
            break;
        }
    }
    if (!full) {
        cout << 0 << endl;
        return 0;
    }

    // 条件を壊すために末尾から削除
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        num[a[i]]--;
        ans++;
        bool valid = true;
        for (int j = 1; j <= m; j++) {
            if (num[j] == 0) {
                valid = false;
                break;
            }
        }
        if (!valid) break;
    }

    cout << ans << endl;
    return 0;
}
