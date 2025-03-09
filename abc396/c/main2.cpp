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
    int n,m;
    cin >> n >> m;
    vector<int> b(n),w(m);
    for(int i = 0;i < n;i++)cin >> b[i];
    for(int i = 0;i < m;i++)cin >> w[i];
    
    sort(b.rbegin(),b.rend());
    sort(w.rbegin(),w.rend());
    
    ll ans = 0;
    ll sum_b = 0;
    ll sum_w = 0;
    ll max_w = 0;
    
    for(int i = 0;i < n;i++){
        sum_b += b[i];
        if(i < m){
            sum_w += w[i];
            
        }
        max_w = max(max_w,sum_w);
        ans = max(ans,sum_b + max_w);
    }
    cout << ans << endl;
    return 0;
}