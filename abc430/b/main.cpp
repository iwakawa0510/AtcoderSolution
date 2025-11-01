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
    int n,m;
    // input,
    cin >> n >> m;
    vector<vector<char>> g(n,n);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> g[i][j];
        }
    }
    // count,
    set<vector<vector<bool>>> mg;
    for(int i = 0;i < n;i++){
        vector<vector<bool>> t;
        for(int j = 0;j < m;j++){
        for(int k = 0;k < m;k++){
            if(g[j][k] == '#'){
                t[j][k] = false;
            }else{
                t[j][k] = true;
            }
            
        }
        mg.insert(t);
        }
    }
    cout << mg.size() << endl;
    return 0;
}