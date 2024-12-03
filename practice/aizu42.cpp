#include <iostream>
using namespace std;

class Dice {
private:
    int surface[6];  // 各面の値を配列で管理
    int top, front, left; // 現在の上面、前面、右面

public:
    // コンストラクタ
    Dice(int input_surface[]) : top(1), front(2), left(4) {
        for (int i = 0; i < 6; i++) {
            surface[i] = input_surface[i];
        }
    }

    // ダイスの回転を行う
    void roll(int t,int f) {
        top = t;
        front = f; 

        // 面の位置を計算
        int bottom = 7 - top;  // 7 - 上面で底面を求める
        int back = 7 - front;  // 7 - 前面で背面を求める
        int left = 7 - (front + right);  // 左面は前面と右面の差から計算
        right = 7 - front - back;
    }
    int get_right_value()const{
    return surface[right - 1];
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
    int q;
    cin >> q;
    int t,f;
    for (int i = 0;i < q;i++) {
        cin >> t >> f;
        dice.roll(t,f);
        cout << dice.get_right_value() << endl;
    }   
    return 0;
}
