#include <iostream>
#include <string>
using namespace std;

struct Dice {
    int surface[6]; // ダイスの各面（上, 前, 右, 左, 後, 下）

    // ダイスを北方向に回転
    void rollNorth() {
        int temp = surface[0];
        surface[0] = surface[1];
        surface[1] = surface[5];
        surface[5] = surface[4];
        surface[4] = temp;

        // デバッグ出力
        cout << "Rolled North: " << surface[0] << endl;
    }

    // ダイスを南方向に回転
    void rollSouth() {
        int temp = surface[0];
        surface[0] = surface[4];
        surface[4] = surface[5];
        surface[5] = surface[1];
        surface[1] = temp;

        // デバッグ出力
        cout << "Rolled South: " << surface[0] << endl;
    }

    // ダイスを東方向に回転
    void rollEast() {
        int temp = surface[0];
        surface[0] = surface[3];
        surface[3] = surface[5];
        surface[5] = surface[2];
        surface[2] = temp;

        // デバッグ出力
        cout << "Rolled East: " << surface[0] << endl;
    }

    // ダイスを西方向に回転
    void rollWest() {
        int temp = surface[0];
        surface[0] = surface[2];
        surface[2] = surface[5];
        surface[5] = surface[3];
        surface[3] = temp;

        // デバッグ出力
        cout << "Rolled West: " << surface[0] << endl;
    }
};

int main() {
    Dice dice;

    // ダイスの面を入力
    for (int i = 0; i < 6; i++) {
        cin >> dice.surface[i];
        if (cin.fail()) {
            cerr << "Error: Invalid input for surface[" << i << "]" << endl;
            return 1;
        }
    }

    // 入力確認
    cout << "Initial surfaces: ";
    for (int i = 0; i < 6; i++) {
        cout << dice.surface[i] << " ";
    }
    cout << endl;

    string directions; // 回転指示
    cin >> directions;

    // 入力が空でないことを確認
    if (directions.empty()) {
        cerr << "Error: Directions string is empty" << endl;
        return 1;
    }

    // 指示に従ってダイスを回転
    for (char dir : directions) {
        if (dir == 'N') {
            dice.rollNorth();
        } else if (dir == 'S') {
            dice.rollSouth();
        } else if (dir == 'E') {
            dice.rollEast();
        } else if (dir == 'W') {
            dice.rollWest();
        } else {
            cerr << "Error: Invalid direction '" << dir << "'" << endl;
            return 1;
        }
    }

    // 最終的なダイスの上面を出力
    cout << "Top face: " << dice.surface[0] << endl;

    return 0;
}
