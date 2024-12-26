#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Dice {
private:
    int surface[6];  // 各面の値を配列で管理

public:
    // コンストラクタ
    Dice(int surfaces[]) {
        for (int i = 0; i < 6; i++) {
            surface[i] = surfaces[i];
        }
    }

    // ダイスの回転を行う
    void roll(char direction) {
        int temp;
        if (direction == 'N') {
            temp = surface[0];
            surface[0] = surface[1];
            surface[1] = surface[5];
            surface[5] = surface[4];
            surface[4] = temp;
        } else if (direction == 'S') {
            temp = surface[0];
            surface[0] = surface[4];
            surface[4] = surface[5];
            surface[5] = surface[1];
            surface[1] = temp;
        } else if (direction == 'E') {
            temp = surface[0];
            surface[0] = surface[3];
            surface[3] = surface[5];
            surface[5] = surface[2];
            surface[2] = temp;
        } else if (direction == 'W') {
            temp = surface[0];
            surface[0] = surface[2];
            surface[2] = surface[5];
            surface[5] = surface[3];
            surface[3] = temp;
        } else if (direction == 'R') {
            temp = surface[1];
            surface[1] = surface[2];
            surface[2] = surface[4];
            surface[4] = surface[3];
            surface[3] = temp;
        }
        
    }

    int getTop() const {
        return surface[0];
    }

    int getFront() const {
        return surface[1];
    }

    int getRight() const {
        return surface[2];
    }

    void turnN() { roll('N'); }
    void turnE() { roll('E'); }
    void turnRight() { roll('R'); }
};

void solve() {
    int surfaces[6];
    for (int i = 0; i < 6; i++) {
        cin >> surfaces[i];
    }

    Dice d(surfaces);

    int n;
    cin >> n;

    vector<string> pattern = {"", "N", "NN", "NNN", "E", "EE"};

    for (int i = 0; i < n; i++) {
        int u, s;
        cin >> u >> s;
        Dice temp(surfaces);

        for (int j = 0; j < 6; j++) {
            for (char c : pattern[j]) {
                if (c == 'N') temp.turnN();
                else if (c == 'E') temp.turnE();
            }

            for (int k = 0; k < 4; k++) {
                temp.turnRight();
                if (temp.getTop() == u && temp.getFront() == s) {
                    cout << temp.getRight() << endl;
                    goto next_query;
                }
            }
        }
    next_query:;
    }
}

int main() {
    solve();
    return 0;
}