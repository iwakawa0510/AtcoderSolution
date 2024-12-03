#include <iostream>
using namespace std;

class Dice {
private:
    int surface[6]; // サイコロの面の値を管理
    int index[6];   // サイコロの面のインデックス

public:
    // コンストラクタ
    Dice(int input_surface[]) {
        for (int i = 0; i < 6; i++) {
            surface[i] = input_surface[i];
            index[i] = i; // 各面の初期インデックスを設定
        }
    }

    // サイコロの4面を回転
    void rotate(int a, int b, int c, int d) {
        int temp = index[a];
        index[a] = index[d];
        index[d] = index[c];
        index[c] = index[b];
        index[b] = temp;
    }

    // 上面を固定しながら回転
    void roll_to_top(int target) {
        // 上面を指定の値に設定
        if (surface[index[0]] != target) {
            for (int i = 0; i < 4; i++) {
                rotate(0, 4, 5, 1); // 前方向に回転
                if (surface[index[0]] == target) return;
            }
            rotate(0, 3, 5, 2); // 左方向に回転
            if (surface[index[0]] == target) return;
            for (int i = 0; i < 4; i++) {
                rotate(0, 4, 5, 1); // 前方向に再度回転
                if (surface[index[0]] == target) return;
            }
        }
    }

    // 前面を固定する
    void roll_to_front(int target) {
        for (int i = 0; i < 4; i++) {
            if (surface[index[1]] == target) return;
            rotate(1, 2, 4, 3); // 上面固定で前方向を調整
        }
    }

    // 上面と前面を設定
    void set_orientation(int top, int front) {
        roll_to_top(top);   // 上面を設定
        roll_to_front(front); // 前面を設定
    }

    // 右面の値を取得
    int get_right_value() const {
        return surface[index[2]];
    }
};

int main() {
    // 各面の値を入力
    int surface[6];
    for (int i = 0; i < 6; i++) {
        cin >> surface[i];
    }

    // サイコロを初期化
    Dice dice(surface);

    // 質問の処理
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int top, front;
        cin >> top >> front;
        dice.set_orientation(top, front); // 上面と前面を設定
        cout << dice.get_right_value() << endl; // 右面の値を出力
    }

    return 0;
}
