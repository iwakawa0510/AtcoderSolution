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
    //input
    int h,w,n;
    cin >> h >> w >> n;
    vector<vector<int>> a(h,vector<int>(w));
    vector<int> b(n);
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0;i < n;i++)cin >> b[i];

    //処理,
    int max_h = 0;
    for(int i = 0;i < h;i++){
        int temp = 0;
        for(int j = 0;j < w;j++){
            for(int k = 0;k < n;k++){
                if(a[i][j] == b[k]){
                    temp++;
                }
            }
        }
        if(temp >= max_h){
            max_h = temp;
        }
    }
    cout << max_h << endl;
    return 0;
}