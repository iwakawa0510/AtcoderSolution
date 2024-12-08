#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int T[100], V[100];
    for (int i = 0; i < N; i++) {
        cin >> T[i] >> V[i];
    }

    int V_temp = 0; // 現在の加湿器内の水量
    int prev_time = 0; // 前回の水追加の時刻

    for (int i = 0; i < N; i++) {
        // 経過時間による水量減少を計算
        V_temp -= (T[i] - prev_time);
        if (V_temp < 0) V_temp = 0; // 水量が負になる場合は0にリセット

        // 水を追加
        V_temp += V[i];

        // 現在時刻を更新
        prev_time = T[i];
    }

    cout << V_temp << endl;
    return 0;
}
