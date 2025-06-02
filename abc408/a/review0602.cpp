#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n, s;
    cin >> n >> s;
    vector<int> t(n, 0);
    for (int i = 0; i < n;i++)
        cin >> t[i];
    for (int i = 0; i < n;i++) {
        if (t[i] - t[i - 1] > s) { // 寝るか判定
            cout << "No" << endl;
            return 0; // プログラムを終了
        }
    }
    cout << "Yes" << endl;
}