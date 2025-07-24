#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>

using namespace std;
void solve(){
        int n;
        string s;
        cin >> n >> s;
        int n2 = 1<<n;
        s ="0"+s; 

        vector<bool> vi(n2);
        vi[0] = true;
        for(int i = 0;i < n2;i++){
            if(vi[i] == 0){
                continue;
            }
            for(int j = 0;j <n;j++){
                if(i&(1<<j)){
                    continue;
                }
                int next = (i|1<<j);
                if(s[next] == '0'){
                    vi[next] = true;
                }
            }
        }
        if(vi[n2 - 1]){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }

}

int main(){ 
    int t;
    cin >> t;
    for(int ti = 0;ti < t;ti++){
        solve();
    }
    return 0;
}