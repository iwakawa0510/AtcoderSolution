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
    int a,b,c;
    int cnt = 0;
    cin >> a >> b >> c;
    if(a == b){
        cnt++;
    }
    if(a == c){
        cnt++;
    }
    if(b == c){
        cnt++;
    }
    
    //出力
    if(1 <= cnt){
        cout << "Yes"<< endl;
        return 0;
    }
    cout << "No"<< endl;
    return 0;
}