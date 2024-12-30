#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // 値を格納する配列
    int values[] = {a, b, c, d};
    // 異なる値のカウント
    int unique_count = 0;
    int unique_values[4] = {0}; // 異なる値を格納する配列
    bool found;

    // 異なる値を判定してカウント
    for (int i = 0; i < 4; i++) {
        found = false;
        for (int j = 0; j < unique_count; j++) {
            if (values[i] == unique_values[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            unique_values[unique_count++] = values[i];
        }
    }

    // 判定：異なる値の数が2ならYes、それ以外はNo
    cout << (unique_count == 2 ? "Yes" : "No") << endl;

    return 0;
}
