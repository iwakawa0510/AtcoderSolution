#include <iostream>
using namespace std;

using ll = long long;

const int MAX_N = 400000; // 最大配列サイズ
ll a[MAX_N];

int main() {
    int n;
    ll m;
    cin >> n >> m;

    ll total_sum = 0;

    // 入力と合計の計算
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }

    // m を合計で割った余りだけに圧縮
    m %= total_sum;

    // スライディングウィンドウによる部分和探索
    ll current_sum = 0;
    int left = 0;

    for (int right = 0; right < 2 * n; ++right) {
        current_sum += a[right % n];
        while (current_sum > m) {
            current_sum -= a[left % n];
            ++left;
        }
        if (current_sum == m) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
