#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector<vector<char>> a(n,vector<char>(n));
    vector<vector<char>> b(n,vector<char>(n));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> b[i][j];
        }
    }

    bool end = false;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(a[i][j] != b[i][j]){
                cout << i+1 << " " << j+1;
                end = true;
                break;
            }
        }
        if(end)break;
    }
    return 0;
}