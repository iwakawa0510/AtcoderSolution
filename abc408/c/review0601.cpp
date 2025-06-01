#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    vector<int>vec(n + 1);
    for(int i = 0;i < m;i++){
        int l,r;
        cin >> l >> r;
        l--;
        vec[l]++;
        vec[r]--;
    }
    for(int i = 1;i <= n;i++){
        vec[i] += vec[i - 1];
    }
    int ans = 1e9;
    for(int i = 0;i < n;i++){
        ans = min(ans,vec[i]);
    }
    cout << ans << endl;
}
