#include <array>
#include <iostream>

using namespace std;

// マス (i, j) にコマを置くことができるか判定する
bool check_square(const array<array<bool, 8>, 8> &board, int i, int j) {
    for (int k = 0; k < 8; k++) {
        // すでに同じ行にコマが置かれていたら、コマを置くことはできない
        if (board[i][k]) {
            return false;
        }
    }
    for (int k = 0; k < 8; k++) {
        // すでに同じ列にコマが置かれていたら、コマを置くことはできない
        if (board[k][j]) {
            return false;
        }
    }
    return true;
}

int main() {
    array<array<bool, 8>, 8> board;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char c;
            cin >> c;
            board[i][j] = c == '#';
        }
    }

    int ans = 0;

    // それぞれのマスについて、
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            // コマが置けるなら答えを 1 増やす
            if (check_square(board, i, j)) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
