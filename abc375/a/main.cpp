#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int N;
    cin >> N;

    cin.ignore(); // 改行を無視
    string str;
    cin >> str;
    
    int ans = 0;
    for(int i = 0;i <=(N-2);i++){
        if(str.at(i) == '#' && str.at(i+1) == '.' && str.at(i+2) == '#'){
           ans++; 
        }
    }
    cout << ans <<endl;
    return 0;
}