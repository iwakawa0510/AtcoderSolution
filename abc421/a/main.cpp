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
    //入力,
    int n;
    cin >> n;
    vector<string> s(n+1);
    int x;
    string y;
    for(int i = 1;i <= n;i++){
        cin >> s[i];
    }
    cin >> x >> y;
    
    if(y == s[x]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}