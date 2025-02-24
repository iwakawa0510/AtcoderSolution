#include <iostream>
#include <algorithm>

using namespace std;

const int N = 210;
int a[N], b[N], c[N];

int main() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < n + m; i++) {
        cin >> a[i];
        if (i < n) b[a[i]] = 1; // A に含まれる要素を記録
        c[i] = a[i]; // C にもコピー（可読性向上）
    }

    sort(c, c + n + m); // c をソート（可読性のため a をそのまま残す）

    for (int i = 0; i < n + m - 1; i++) {
        if (b[c[i]] && b[c[i + 1]]) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}
