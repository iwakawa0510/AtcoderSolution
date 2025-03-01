#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector <int> a(n);
    for(auto& x : a)cin >> x;

    vector<int> cnt(1000005);
    int m = 0;
    const int INF = 1001001001;
    int ans = INF;
    int r = 0; 
    for(int l = 0;l < n;l++){
        while(r < n && m == 0){
            cnt[a[r]]++;
            if(cnt[a[r]] == 2)m++;
            r++;
        }
        if(m == 0)break;
        ans = min(ans,r-l);
        if(cnt[a[l]] == 2)m--;
        cnt[a[l]]--;
    }
    if(ans == INF)ans = -1;
    cout << ans << endl;
    return 0;
}