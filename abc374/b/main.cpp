#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string S,T;
    cin >> S >> T;
    int ans = 0;
    int n = min(S.size(),T.size());
    for(int i = 0;i < n;i++){
        if(S[i] != T[i]){
            i++;
            ans += i;
            cout << ans << endl;
            return 0;
        }
    }
    if(S.size() != T.size()){
        cout << (n+1) << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}