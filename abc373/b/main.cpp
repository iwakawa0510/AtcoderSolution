#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    string str;
    cin >> str;
    int n = (str.size() - 1);
    int ans = 0;
    for(int i = 0;i < n;i++){
        int d_abs = 0;
       if(0 < (str.at(i+1) - str.at(i))){
        d_abs = str.at(i+1) - str.at(i);
        ans += d_abs;
       }else{
        d_abs = (str.at(i+1) - (str.at(i)))*-1;
        ans += d_abs;
       }
       
       cout << d_abs << endl;
    }
    cout << ans << endl;
    return 0;
}