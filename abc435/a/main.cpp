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
    cin >> n;
    int ans = 0;
    for(int i = 1;i <= n;i++){
        ans += i;
    }
    cout << ans << endl;
    return 0;
}