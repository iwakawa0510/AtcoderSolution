#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){ 
    int n,m;
    cin >> n >> m;
    vector<vector<int>> l(n);
    vector<int> cnt(m);
    int ans = 0;

    for(int i = 0;i < m;i++){
        int k;
        cin >> k;
        cnt[i] = k;
        for(int j = 0;j < k;j++){
            int a;
            cin >> a;
            a--;//0-index,
            l[a].push_back(i);
        }
    }

    for(int i = 0;i < n;i++){
        int b;
        cin >> b;
        b--;//0-index,
        for(int j : l[b]){
            cnt[j]--;
            if(cnt[j] == 0){
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}