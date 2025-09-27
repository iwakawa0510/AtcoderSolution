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
        int t = (pow(-1,i)*(i*i*i));
        ans += t;
    }
    cout << ans << endl;
    return 0;
}