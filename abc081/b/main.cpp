#include <iostream>
using namespace std;

int main() {
    int N;
    int A[200];
    cin >> N;

    // 配列の入力
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int count = 0;

    // すべての要素が偶数である限りループ
    while (true) {
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                // 奇数が見つかったら終了
                cout << count << endl;
                return 0;
            }
            A[i] /= 2; // 要素を2で割る
        }
        count++; // 操作回数を増やす
    }
}
