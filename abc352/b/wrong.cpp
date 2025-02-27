#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    string s,t;
    cin >> s >> t;
    int n = t.size();
    int m = s.size();
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){//間違いの原因は0で初期化していること,ループ外に変数を作り分けて管理しなければならない,
            if(s[j] == t[i]){
                cout << i+1 << ' ';
                break;
            } 
        }
    }
    return 0;
}