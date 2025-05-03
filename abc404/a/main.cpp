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
    sort(s.begin(),s.end());
    string a_z;
    char ans;
    for(int i = 0;i < 26;i++){
        a_z.push_back('a'+ i);
    }
    for(int i = 0;i < a_z.length();i++){
        for(int j = 0;j < s.length();j++){
            if(a_z[i] == s[j]){
                a_z.erase(i,i+1);
            }
        }
    }
    ans = a_z.at(0);

    cout << ans << endl;
    return 0;
}