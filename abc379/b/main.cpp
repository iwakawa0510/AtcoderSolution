#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    int n,m;
    cin >> n >> m;
    string str;
    cin >> str;
    
    int cnt_o = 0;
    int ans = 0;

    for(int i = 0;i < n;i++){        
        if(str.at(i) == 'X'){
            cnt_o = 0;
            continue;
        }
        if(str.at(i) == 'O'){
            cnt_o++;
            }
        if(cnt_o >= m){
            cnt_o = 0;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}