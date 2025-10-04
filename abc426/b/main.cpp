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
    string s;
    cin >> s;
    int  cnt_1 = 0;
    int  cnt_2 = 0;
    char c_1;
    char c_2;
    for(int i = 0;i < s.size();i++){
        if(i == 0){
            c_1 = s[i];
        }
        if(c_1 == s[i]){
            cnt_1++;
        }else{
            c_2 = s[i];
            cnt_2++;
        }
    }
    if(cnt_1 < cnt_2){
        cout << c_1 << endl;
    }else{
        cout << c_2 << endl;
    }
    return 0;
}