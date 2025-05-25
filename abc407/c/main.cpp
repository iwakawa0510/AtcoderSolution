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
    vector<int> t(0);
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0;
    //ボタンAの実装,
    for(int i = 0;i < n;i++){
        t.push_back(0);
        cnt++;
        for(int j = 0;j < s[i];j++){
            if(s[i] > s[i+1])continue;
            //ボタンBの実装,
            for(int k = 0;k < t.size();k++){
                t[k]++;
            }
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}