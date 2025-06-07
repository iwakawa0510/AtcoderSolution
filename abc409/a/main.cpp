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
    int n;
    string t,a;
    cin >> n >> t >> a;
    for(int i = 0;i < ;i++){
        if(t[i]== a[i]){//問題文の誤読、この条件では全ての入力文字列が"x"だった場合WAとなる,
            cout << "Yes" << endl;
            return 0;
        }
    }cout << "No" << endl;
    return 0;
}