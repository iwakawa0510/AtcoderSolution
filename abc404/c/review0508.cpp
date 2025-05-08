#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main(){ 
    int n,m;
    cin >> n >> m;
    vector<int> deg(n);
    dsu uf(n);
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        --a;
        --b;
        deg[a]++;
        deg[b]++;
        uf.merge(a,b);
    }

    if(deg == vector<int>(n,2) && uf.size(0) == n){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}