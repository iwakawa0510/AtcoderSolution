#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    vector<string> S(12);
    for(int i = 0;i < 12;i++){
        cin >> S[i];
    }
    int cnt = 0;
    for(int i = 0;i < 12;i++){
        if(S[i].length() == i+1){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
} 
