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
    int ans = 1;
    for(int i = 1;i < n;i++){
        string s = to_string(ans);
        for(int j = 0;j < s.size();j++){
            ans += (s[j]-'0');
        }
    }
    cout << ans << endl;
    return 0;
}