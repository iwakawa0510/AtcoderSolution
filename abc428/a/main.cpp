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
    int s,a,b,x;
    cin >> s >> a >> b >> x;
    int ans = 0;
    while(0 < x){
        for(int i = 0;i < a;i++){
            if(0 < x){
                ans += s;
            }
            x--;
        }
        for(int i = 0;i < b;i++){
            x--;
        }        
    }
    cout << ans << endl;
    return 0;
}