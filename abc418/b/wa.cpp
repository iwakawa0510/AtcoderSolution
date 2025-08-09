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
    string s;
    cin >> s;
    long double ans = 0;
    int n = s.size();
    string t;
    for(int i = 0;i < n-1;i++){
        bool ok = false;
        if(!(s[i]=='t')){
            continue;
        }
        for(int j = n;i < n;j--){
            if(!(s[j]=='t')){
                continue;
            }
            t = s.substr(i,j);
            ok = true;
            break;
        }
        if(ok){
            break;
        }
    }
    // cout << t << endl;
    // cout << t.size() << endl;
    int m = t.size();
        if(2 == m){
        ans = 1;
        cout << fixed << setprecision(18);
        cout << ans << endl;
        return 0;
    }
    int cnt = 0;
    for(int i = 0;i < m;i++){
        if((t[i]=='t')){
            cnt++;
        }
    }
    if(2>=cnt){
        cout << fixed << setprecision(18);
        cout << ans << endl;
        return 0;
    }

    if(2 > m){
        cout << fixed << setprecision(18);
        cout << ans << endl;
        return 0;
    }
    long double x = cnt;
    long double t_abs = t.size();
    ans = (x-2)/(t_abs-2);
    cout << fixed << setprecision(18);
    cout << ans << endl;
    return 0;
}