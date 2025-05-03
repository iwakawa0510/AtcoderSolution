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
    int ans = 0;
    int n;
    cin >> n;
    vector<vector<char>> s(n,vector(n));
    vector<vector<char>> t(n,vector(n));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            char temp;
            cin >> temp;
            if(temp == '#'){
                s[i][j] = true;
            }else if(temp == '.'){
                s[i][j] = false;
            }
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            char temp;
            cin >> temp;
            if(temp == '#'){
                t[i][j] = true;
            }else if(temp == '.'){
                t[i][j] = false;
            }
        }
    }
    return 0;
}