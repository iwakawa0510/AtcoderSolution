#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N), T(M);
    
    for (auto& row : S) cin >> row;
    for (auto& row : T) cin >> row;

    for (int a = 0; a <= N - M; ++a) {
        for (int b = 0; b <= N - M; ++b) {
            bool match = true;
            for (int i = 0; i < M; ++i) {
                for (int j = 0; j < M; ++j) {
                    if (S[a + i][b + j] != T[i][j]) {
                        match = false;
                        break;
                    }
                }
                if (!match) break;
            }
            if (match) {
                cout << a + 1 << " " << b + 1 << endl;
                return 0;  // 解が一意なので即終了
            }
        }
    }-
}
