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
    int h,b;
    cin >> h >> b;
    int ans = 0;
    while(h > b){
        h--;
        ans++;
    }
    cout << ans << endl;
    return 0;
}