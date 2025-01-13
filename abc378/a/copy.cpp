#include <iostream>
using namespace std;

int main() {
    int A[4];
    int mem[4] = {0};

    for(int i = 0;i < 4;i++){
        cin >> A[i];
        mem[A[i]-1];
    }

    int ans = 0;
    for(int i = 0;i < 4;i++){
        ans += mem[i] / 2;
    }
    
    cout << ans << endl;
    return 0;
}