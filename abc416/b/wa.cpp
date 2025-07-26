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
    int n = s.size();
    string t(n,'.');
    int cnt = 0;
    for(int i = 0;i < n;i++){
        if(s[i] == '#'){
            t[i] = '#';
            if(1 <= i & t[i-2] != 'o'){
                t[i-1] = 'o';
                cnt++;
            }
            if(i < (n-1)){
                t[i+1] = 'o';
                cnt++;
            }
        }
    }
    if(!cnt){
        t[n-1] = 'o';  
        }
    cout << t << endl;
    return 0;
}