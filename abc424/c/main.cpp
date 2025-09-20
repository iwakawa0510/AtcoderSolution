#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    int ans = 0;
    vector<bool> skills(n+1,false);
    vector<int> a(n+1,0);
    vector<int> b(n+1,0);
    for(int i = 1;i <= n;i++){
        cin >> a[i] >> b[i];
        if(a[i] == 0 && b[i] == 0){
            skills[i] = true;
        }
    }
    for(int i = 1;i <= n;i++){
        if(skills[a[i]] || skills[b[i]]){
            skills[i] = true;
        }
        
        if(skills[i]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}