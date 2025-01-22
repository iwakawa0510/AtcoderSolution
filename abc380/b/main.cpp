#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;

    int cnt = 0;
    vector<int> a;
    for(int i = 0;i < str.size();i++){
        if(str[i] == '|'){
            a.push_back(cnt);
            cnt = 0;
            continue;            
        }
        cnt++;
    }
    //出力ループ,
    for(int i = 0;i < a.size();i++){
        if(i == 0)continue;
        cout << a[i] << endl;
    }
    return 0;
}