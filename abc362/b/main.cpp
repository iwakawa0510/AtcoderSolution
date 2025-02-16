#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() { 
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    // 3辺の長さの2乗を計算（距離の2乗を保持）
    int a2 = (xb - xa) * (xb - xa) + (yb - ya) * (yb - ya);
    int b2 = (xc - xb) * (xc - xb) + (yc - yb) * (yc - yb);
    int c2 = (xc - xa) * (xc - xa) + (yc - ya) * (yc - ya);

    // 最大の辺の2乗を斜辺とするためソート
    vector<int> sides = {a2, b2, c2};
    sort(sides.begin(), sides.end()); // sides[2] が最長辺の2乗

    // ピタゴラスの定理で直角三角形判定
    if (sides[0] + sides[1] == sides[2]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
