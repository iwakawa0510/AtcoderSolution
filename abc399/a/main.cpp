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
    int n;
    cin >> n;

    string s(n,' ');
    string t(n,' ');
    for(int i = 0;i < n;i++){
        cin >> s[i];
    }

    for(int i = 0;i < n;i++){
        cin >> t[i];
    }
    
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(s[i] != t[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}