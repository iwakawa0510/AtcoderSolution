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
    //入力,
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i = 0;i < n;i++){
        cin >> s[i];
    }
    // 投票,
    vector<int> v(n,0);
    vector<bool> flag(n,false);
    for(int i = 0;i < m;i++){
        int x = 0;
        int y = 0;
        for(int j = 0;j < n;j++){
            if(s[i][j]){
                x++;
                flag[j] = false;
            }else{
                y++;
                flag[j] = true;
            }
        }
        if(x == 0 || y == 0){
            for(int j = 0;j < n;j++){
                v[j]++;
            }
        }else if(y < x){
            for(int j = 0;j < n;j++){
                if(!(flag[j])){
                    v[j]++;
                }
            }
        }else if(y > x){
            for(int j = 0;j < n;j++){
                if(flag[j]){
                    v[j]++;
                }
            }
        }
    }

    //集計,
    vector<int> t = v;
    sort(t.begin(),t.end());
    int max_v = t.back();
    //出力,
    for(int i = 0;i < n;i++){
        if(max_v == v[i]){
            cout << (i+1) <<" ";
        }
    }
    return 0;
}