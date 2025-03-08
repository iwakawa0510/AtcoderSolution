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
    int n,m;
    cin >> n >> m;
    vector<int> b(n),w(m);
    for(auto& x:b)cin >> x;
    for(auto& x:w)cin >> x;

    sort(b.begin(),b.end(),greater<int>{});
    sort(w.begin(),w.end(),greater<int>{});

    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += max(b[i],w[i]);
        if(b[i] > w[i] && w[i] >= 0){
            sum += w[i];
        }
    } 
    
    cout << sum << endl;
    return 0;
}