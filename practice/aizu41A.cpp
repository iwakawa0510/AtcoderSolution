#include <iostream>
using namespace std;

class Dice {
private:
    int surface[6];  // 各面の値を配列で管理
    int top, front, right; // 現在の上面、前面、右面

public:
    // コンストラクタ
    Dice(int surfaces[]) : top(1), front(2), right(3) {
        for (int i = 0; i < 6; i++) {
            surface[i] = surfaces[i];
        }
    }

    // ダイスの回転を行う
    void roll(char direction) {
        int bottom = 7 - top;
        int back = 7 - front;
        int left = 7 - right;

        if (direction == 'N') {
            int newTop = front;
            front = bottom;
            top = newTop;
        } else if (direction == 'S') {
            int newTop = back;
            back = bottom;
            top = newTop;
            front = 7 - back;
        } else if (direction == 'E') {
            int newTop = left;
            left = bottom;
            top = newTop;
            right = 7 - left;
        } else if (direction == 'W') {
            int newTop = right;
            right = bottom;
            top = newTop;
            left = 7 - right;
        }
    }

    // 現在の上面の値を取得
    int getTopValue() const {
        return surface[top - 1];
    }
};

int main() {
    // 各面の値を入力
    int surface[6];
    for (int i = 0; i < 6; i++) {
        cin >> surface[i];
    }

    // ダイスを初期化
    Dice dice(surface);

    // 回転指示を読み取り実行
    char direction;
    while (cin >> direction) {
        dice.roll(direction);
    }

    // 上面の値を出力
    cout << dice.getTopValue() << endl;
    return 0;
}
