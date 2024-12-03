#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, p;
    cin >> s >> p;

    // sを2回繋げた文字列を作成
    string double_s = s + s;

    // double_s内にpが存在するかを判定
    if (double_s.find(p) != string::npos) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
