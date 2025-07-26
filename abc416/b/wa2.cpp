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
    string t(n,'o');
    for(int i = 0;i < n;i++){
        if(s[i] == '#'){
            t[i] = '#';
        }        
    }

    for(int i = 0;i < n;i++){
        int l = 0;
        if(t[i] == 'o'){
            l = i;
        }
        for(int j = i+1;j <= n;j++){
            int r = 0;
            if(t[j] == 'o'){
            r = j;
            }

            bool check = false;
            for(int k = l-1;l < r;k++){
                if(t[k] == 'o'){
                    check = true
                }
                if((!t[k] == '#') & check){
                    t[k] = '.';
                }
            }
        }
    }
    cout << t << endl;
    return 0;
}