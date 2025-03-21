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
    
    int ans = 0;
    char t = 'i';
    for(int i = 0;i < s.size();i++){        
        if(s[i] == t){
            t = t == 'i' ? 'o':'i';
        }else{
            ans++;
        }
    }
    if(t == 'o')ans++;
    cout << ans << endl;
    return 0;
}