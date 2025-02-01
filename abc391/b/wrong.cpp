#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;


int main(){ 
    int n,m;
    cin >> n >> m;

    vector<string> str_s(n,string(n));
    vector<string> str_t(m,string(m));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> str_s[i][j];
        }
    }

    for(int i = 0;i < m;i++){
        for(int j = 0;j < m;j++){
            cin >> str_t[i][j];
        }
    }
    //探索,
    int ans_l = 0;
    int ans_c = 0;
    bool fished = 0;
    for(int i = 0;i < m;i++){
        for(int j = 0;j < m;j++){ 
        if(equal(str_s[i].begin(),str_s[i].end(),str_t[i].begin(),str_t[i].end())){
        }else{break;
        }
        
        }
    }
    
    return 0;
}