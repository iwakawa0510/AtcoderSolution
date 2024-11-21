#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double minkowskiDistance(const int *x, const int *y, int n, int p) {
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        int diff = x[i] - y[i];
        if (diff < 0) diff = -diff;  // abs関数を使わず絶対値を計算

        // pの値に応じてdiffのp乗を手動で計算
        if (p == 1) {
            sum += diff;
        } else if (p == 2) {
            sum += diff * diff;
        } else if (p == 3) {
            sum += diff * diff * diff;
        }
    }

    // p乗根を取る
    if (p == 1) return sum;
    if (p == 2) return sqrt(sum);
    if (p == 3) return cbrt(sum);  // 3乗根を計算するためにcbrtを使用

    return 0.0;  // このコードには到達しない
}

double chebyshevDistance(const int *x, const int *y, int n) {
    double maxDist = 0.0;
    for (int i = 0; i < n; ++i) {
        int diff = x[i] - y[i];
        if (diff < 0) diff = -diff;  // abs関数を使わず絶対値を計算
        if (diff > maxDist) maxDist = diff;
    }
    return maxDist;
}

int main() {
    int n;
    cin >> n;

    int x[100], y[100];
    for (int i = 0; i < n; ++i) cin >> x[i];
    for (int i = 0; i < n; ++i) cin >> y[i];

    cout << fixed << setprecision(6);

    // p = 1 (マンハッタン距離)
    cout << minkowskiDistance(x, y, n, 1) << endl;

    // p = 2 (ユークリッド距離)
    cout << minkowskiDistance(x, y, n, 2) << endl;

    // p = 3 の場合
    cout << minkowskiDistance(x, y, n, 3) << endl;

    // p = ∞ (チェビシェフ距離)
    cout << chebyshevDistance(x, y, n) << endl;

    return 0;
}
