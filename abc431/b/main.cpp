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
    int x;
    int n;
    int q;    
    cin >> x >> n;
    vector<int> w(n);
    vector<bool> b(n,false);
    int ans = x;
    for(int i = 0;i < n;i++){
        cin >> w[i];
    }
    cin >> q;
    for(int i = 0;i < q;i++){
        int p;
        cin >> p;
        p--;
        if(!b[p]){
            ans += w[p];
            b[p] = true;
        }else{
            ans -= w[p];
            b[p] = false;
        }
        cout << ans << endl;
    }
    return 0;
}