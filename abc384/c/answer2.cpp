#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) cin >> a[i];

    vector<pair<int, string>> ans;
    for (int i = 1; i < 32; i++) { // 1から31まで
        int score = 0;
        string name = "";
        for (int j = 0; j < 5; j++) {
            if (i & (1 << j)) { // j番目のビットが立っているか
                score += a[j];
                name += 'A' + j;
            }
        }
        ans.push_back({-score, name}); // 得点を負にしてソートしやすく
    }

    // ソート (得点で降順 → 名前で昇順)
    sort(ans.begin(), ans.end());

    for (const auto& p : ans) {
        cout << p.second << endl;
    }

    return 0;
}
