#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
#include <deque>
using namespace std;
using ll = long long;

int main(){ 
    int q;
    cin >> q;
    deque<ll> a;
    for(int i = 0;i < q;i++){
        int n,c,x,k;
        cin >> n;
        if(n == 1){
            cin >> c >> x;
            for(int j = 0;j < c;j++){
                a.push_back(x);
            }
        }else if(n == 2){
            cin >> k;
            ll ans_q2 = 0;
            for(int j = 0;j < k;j++){
                ans_q2 += a.front();
                a.pop_front();
            }
            cout << ans_q2 << endl;
        }
    }
    return 0;
}