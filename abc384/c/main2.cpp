#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){ 
    int a[5];
    for(int i = 0;i < 5;i++)cin >> a[i];

    vector<pair<int, string>> ans;
    for(int i = 1; i < 32;i++){
        int score = 0;
        string name = "";
        for(int j = 0;j < 5;j++){
            if(i & (1 << j)){
                score += a[j];
                name += 'A' + j;
            }
        }
        ans.push_back({-score,name});
    }

    sort(ans.begin(),ans.end());

    for(const auto& p : ans){
        cout << p.second << endl;
    }
    
    return 0;
}