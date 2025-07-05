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
    vector<string> str(n+1);

    for(int i = 1;i <= n;i++){
        string s;
        cin >> s;
        str[i] = s;
    }
    set<string> str_a;
    int ans = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            if(i == j)continue;
            string t;
            t = (str[i] + str[j]);
            if(str_a.insert(t).second){                
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}