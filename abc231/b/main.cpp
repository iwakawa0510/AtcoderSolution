#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main(){ 
    int n;
    cin >> n;

    map<string,int> cnt;
    
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        cnt[s]++;
    }
    int mx = 0;
    string ans;
    for(auto x:cnt)mx = max(mx,x.second);
    for(auto x:cnt) if(mx == x.second)ans = x.first;
    
    cout << ans << endl;
    return 0;
}