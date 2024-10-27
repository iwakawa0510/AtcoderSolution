#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, C;
    cin >> a >> b >> C;

    // 円周率を手動で定義
    const double PI = 3.141592653589793;

    // 角度をラジアンに変換
    double C_rad = C * PI / 180.0;

    // 面積 S の計算
    double S = 0.5 * a * b * sin(C_rad);

    // 周の長さ L の計算
    double c = sqrt(a * a + b * b - 2 * a * b * cos(C_rad));
    double L = a + b + c;

    // 高さ h の計算
    double h = (2 * S) / a;

    // 出力：小数点以下8桁まで表示
    cout << fixed << setprecision(8);
    cout << S << endl;
    cout << L << endl;
    cout << h << endl;

    return 0;
}
