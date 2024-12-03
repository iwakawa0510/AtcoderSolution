#include <iostream>
#include <array>
using namespace std;

class Dice {
private:
    array<int, 6> surface;  // サイコロの各面の値
    int top, front, right; // 現在の上面、前面、右面のインデックス

public:
    // コンストラクタ
    Dice(array<int, 6> input_surface)
        : surface(input_surface), top(0), front(1), right(2) {}

    // サイコロを回転する
    void roll(char direction) {
        int tmp;
        switch (direction) {
            case 'N': // 北方向に回転
                tmp = top;
                top = front;
                front = 5 - tmp;
                break;
            case 'S': // 南方向に回転
                tmp = top;
                top = 5 - front;
                front = tmp;
                break;
            case 'E': // 東方向に回転
                tmp = top;
                top = 5 - right;
                right = tmp;
                break;
            case 'W': // 西方向に回転
                tmp = top;
                top = right;
                right = 5 - tmp;
                break;
        }
    }

    // 上面と前面を一致させるまで回転
    void roll_to_match(int t, int f) {
        // 初期状態から全探索
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 4; j++) {
                if (surface[top] == t && surface[front] == f) return;
                roll('E');
            }
            if (i % 2 == 0)
                roll('N');
            else
                roll('W');
        }
    }

    // 右面の値を取得
    int get_right_value() const {
        return surface[right];
    }
};

int main() {
    // サイコロの面の値を入力
    array<int, 6> surface;
    for (int i = 0; i < 6; i++) {
        cin >> surface[i];
    }

    Dice dice(surface);

    // 質問の数を取得
    int q;
    cin >> q;

    // 質問に答える
    for (int i = 0; i < q; i++) {
        int t, f;
        cin >> t >> f;
        dice.roll_to_match(t, f);
        cout << dice.get_right_value() << endl;
    }

    return 0;
}
