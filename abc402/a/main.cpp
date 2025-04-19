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
    string ans;
    for(int i = 0;i < s.size();i++){
        if('a'> s[i]){
            ans.push_back(s[i]);
        }
    }
    cout << ans << endl;
    return 0;
}