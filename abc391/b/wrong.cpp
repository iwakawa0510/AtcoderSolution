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

    vector<vector<string>> str_s(n,vector<string>(n));
    vector<vector<string>> str_t(m,vector<string>(m));
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

    int check_board(int m,int ans_l,int ans_c){
    for(int i = 0;i < m;i++){
        for(int j = 0;j < m;j++){ 
        if(str_s[i][j] != str_t[i][j])
        ans_l += i;
        ans_c += j;
        break;
            }
        }
    }
    return 0;
}