#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
#include <deque>
#include <queue>
using namespace std;
using ll = long long;

int main(){ 
    int q;
    cin >> q;
    queue<pair<int,int>> a;
    for(int i = 0;i < q;i++){       
        int n,c,x; 
        cin >> n;
        if(n == 1){
            cin >> c >> x;
            a.emplace(x,c);            
        }else if(n == 2){
            int k;
            cin >> k;
            ll ans = 0;
            while(k > 0){
                auto [x,c] = a.front();
                if(c <= k){
                ans += (ll)x*c;
                k -= c;
                a.pop();
                }else{
                    ans += (ll)x*k;
                    a.front().second -= k;
                    k = 0;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}