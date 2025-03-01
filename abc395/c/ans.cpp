//indexを昇順に並び替え、隣り合う部分の差を求める,
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;

    const int MAX_VAL = 1000000;
    vector<vector<int>> pos(MAX_VAL + 1);  // 各値ごとの出現位置リスト

    // 各数値の出現位置を記録
    for (int i = 0; i < n; i++) {
        pos[a[i]].push_back(i);
    }

    int ans = n + 1;

    // 各数値について最短の距離を探す
    for (int i = 0; i <= MAX_VAL; i++) {
        if (pos[i].size() < 2) continue; // 出現が1回以下なら無視

        for (size_t j = 0; j < pos[i].size() - 1; j++) {
            ans = min(ans, pos[i][j + 1] - pos[i][j] + 1);
        }
    }

    if (ans == n + 1) ans = -1;
    cout << ans << endl;

    return 0;
}
