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
    int d,f;
    cin >> d >> f;
    int m = d - f;
    int t = (m/7)+1;
    int t7 = t*7;
    int ans = t7 - m;
    cout << ans << endl;
    return 0;
}