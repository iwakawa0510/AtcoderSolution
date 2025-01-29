#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    
    int ans = 0;
    int s_size = S.size(), t_size = T.size();
    int n = (s_size < t_size) ? s_size : t_size;
    
    for (int i = 0; i < n; i++) {
        if (S[i] != T[i]) {
            i++;  // 1-based index にする
            ans += i;
            cout << ans << endl;
            return 0;
        }
    }
    
    if (s_size != t_size) {
        cout << (n + 1) << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}
