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
    void roll(int t,int r) {

        //例外処理
        if(t >= 7 or t <= 0){
            return 1;
            cout << "不正な値です。" << endl;
        }
        if(r >= 7 or random <= 0){
            return 1;
            cout << "不正な値です。" << endl;
        }
        top = t;
        right = r;
        int bottom = 7 - top;
        int back = 7 - front;
        int left = 7 - right;
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
    int t,r;
    for (int i = 0;i < q;i++) {
        dice.roll(cin >> t,r);
        
    }
    
}
