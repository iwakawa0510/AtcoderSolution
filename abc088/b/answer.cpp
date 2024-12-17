#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    // 降順ソート
    sort(a.begin(), a.end(), greater<int>());

    int Alice = 0, Bob = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) Alice += a[i]; // Aliceのターン
        else Bob += a[i];              // Bobのターン
    }
    
    cout << (Alice - Bob) << endl; // 得点差を出力
    return 0;
}
