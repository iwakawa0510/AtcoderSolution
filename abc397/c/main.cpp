#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;
using ll = long long;

int main(){ 
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i = 1;i < n+1;i++){
        cin >> a[i];
    }
    ll ans = 0;
    for(int i = 1;i < n+1;i++){
        ll sum_a1 = 0;
        ll sum_a2 = 0;
        vector<bool> b(n+1);
        
        for(int j = 1;j <= n+1;j++)b[j] = true;
        for(int j = 1;j <= i;j++){
            sum_a1 += b[a[j]];
            b[a[j]] = false;
        }

        for(int j = 1;j <= n+1;j++)b[j] = true;
        for(int j = i+1;j <= n+1;j++){
            sum_a2 += b[a[j]];
            b[a[j]] = false;
        }
        ans = max(ans,sum_a1 + sum_a2);
    }
    
    cout << ans << endl;
    return 0;
}