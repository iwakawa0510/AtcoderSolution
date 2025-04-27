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
    int ans = 0;
    cin >> n;
    for(int i = 1;i <= n;i++){
        int a;
        cin >> a;
        if(i%2 == 1){
            ans += a;
        }
    }
    cout << ans << endl;
    return 0;
}