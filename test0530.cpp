#include <iostream>
#include <iomanip> // std::setwを使用するために必要

const double G = 9.80665; // 重力加速度

void printState(double t, double x, double v) {
    std::cout   << std::left << "\t t=" << std::setw(16) << t 
                << std::left << "\t x=" << std::setw(16) << x 
                << std::left << "\t v=" << std::setw(16) << v << std::endl;
}

int main() {
    double t = 0.0; // 時刻 t
    double h = 0.01; // 刻み幅

    double v; // 速度
    std::cout << "初速度 v0 を入力してください: ";
    std::cin >> v;

    double x; // 高度 
    std::cout << "初期高度 x0 を入力してください: ";
    std::cin >> x;

    printState(t, x, v); // 初期状態の出力

    while (x > 0) // 地面に達するまで計算
    {
        t += h;    // 時刻の更新
        v += G * h; // 速度の更新
        x -= v * h; // 位置の更新

        printState(t, x, v); // 更新後の状態の出力
    }

    return 0;
}
