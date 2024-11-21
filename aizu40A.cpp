#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>aaa

using namespace std;

// ミンコフスキー距離を計算する関数
double minkowskiDistance(const vector<int64_t>& x, const vector<int64_t>& y, int p) {
    double sum = 0.0;
    for (size_t i = 0; i < x.size(); ++i) {
        sum += pow(abs(x[i] - y[i]), p);
    }
    return pow(sum, 1.0 / p);
}

// チェビシェフ距離を計算する関数
double chebyshevDistance(const vector<int64_t>& x, const vector<int64_t>& y) {
    double maxDist = 0.0;
    for (size_t i = 0; i < x.size(); ++i) {
        maxDist = max(maxDist, static_cast<double>(abs(x[i] - y[i])));
    }
    return maxDist;
}

int main() {
    int n;
    cin >> n;

    // 入力チェック
    if (n < 1 || n > 100) {
        cerr << "Error: n must be between 1 and 100." << endl;
        return 1;
    }

    vector<int64_t> x(n), y(n);
    for (int64_t& xi : x) cin >> xi;
    for (int64_t& yi : y) cin >> yi;

    // 出力部で固定小数点と精度設定
    cout << fixed << setprecision(6);

    // p = 1 (マンハッタン距離)
    cout << minkowskiDistance(x, y, 1) << endl;

    // p = 2 (ユークリッド距離)
    cout << minkowskiDistance(x, y, 2) << endl;

    // p = 3 の場合
    cout << minkowskiDistance(x, y, 3) << endl;

    // p = ∞ (チェビシェフ距離)
    cout << chebyshevDistance(x, y) << endl;

    return 0;
}
