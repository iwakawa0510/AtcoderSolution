#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
#include <atcoder/all>
using namespace atcoder;
using namespace std;

int main(){ 
    int n,m;
    cin >> n >> m;
    
    int ans = 0;
    dsu uf(n);
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        if(uf.same(a,b)){
            ans++;
            continue;
        }
        uf.merge(a,b);
    }
    cout << ans << endl;
    return 0;
}