#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> vec(n + 1);//n+1の配列を用意する。0オリジンの場合endの要素を0で初期化することが出来る,
    for (int i = 0; i < m;i++) {
        int l, r;
        cin >> l >> r;
        l--;
        vec[l]++, vec[r]--;//配列を
    }
    for (int i = 1; i <= n;i++)
        vec[i] += vec[i - 1];
    // 最小値の判定,
    int ans = 1e9;
    for (int i = 0; i < n;i++)
        ans = min(ans, vec[i]);
    cout << ans << endl;
}
