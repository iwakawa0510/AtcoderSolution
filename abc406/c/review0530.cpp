#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
#include <utility>
using namespace std;
using ll = long long;

int main(){ 
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0;i < (n);i++){
        cin >> p[i];
    }
    
    vector<int> d;
    for(int i = 0;i < (n - 1);i++){
        d.push_back((p[i] < p[i+1])? 0:1);
    }

    using P = pair<int,int>;
    vector<P> rle;
    for(int x:d){
        if(rle.size() && rle.back().first == x){
            rle.back().second++;
        }else{
            rle.emplace_back(x,1);
        }
    }

    ll ans = 0;
    for(int i = 0;i < rle.size();i++){
        if(rle[i].first == 1){
            ll l = 0;
            ll r = 0;
            if(0 < i){
                l = rle[i - 1].second;
            }
            if(i + 1 < rle.size())r = rle[i+1].second;
            ans += l*r;
        }
    }
    cout << ans << endl;
    return 0;
}