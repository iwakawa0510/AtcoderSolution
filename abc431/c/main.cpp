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
    int n,m,k;
    int ans = 0;
    cin >> n >> m >> k;
    vector<int> h(n);
    vector<int> b(n);
    for(int i = 0;i < n;i++){
        cin >> h[i];
    }
    for(int i = 0;i < m;i++){
        cin >> b[i];
    }
    sort(h.begin(),h.end());
    sort(b.begin(),b.end());
    
    for(int i = h.size();i > 0;i--){
        bool ok = false;
        
        for(int j = b.size();j > 0;j--){
            if(ok){
            break;
            } 
            if(h[i] > b[j]){
                h.pop_back();
            }else{
                h.pop_back();
                b.pop_back();
                ans++;
                ok = true;
            }
        }
    }
    
    if(ans >= k){
        cout << "Yes" << endl;
        return 0;
    }else{
        cout << "No" << endl;
        return 0;
    }
}