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
    vector<int> fh(13,0);//トランプのカウント用配列,
    for(int i = 0;i < 7;i++){
        int x;
        cin >> x;
        fh[x-1]++;//0オリジンに変換,
    }
    sort(fh.rbegin(),fh.rend());//降順ソート
    if(fh[0] >= 3 && fh[1] >= 2){//フルハウスの条件判定,
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}