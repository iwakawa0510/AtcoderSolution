#include <iostream>
#include <array>
#include <algorithm> // std::swap, std::equal
using namespace std;

int main() {
    array<int, 5> A;
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }

    array<int, 5> ans = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 4; i++) {
        // 元の配列をコピー
        auto temp = A;

        // 隣接要素を交換
        std::swap(temp[i], temp[i + 1]);

        // 昇順配列と一致するか確認
        if (temp == ans) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    // どの場合も一致しない場合は No を出力
    cout << "No" << endl;
    return 0;
}
