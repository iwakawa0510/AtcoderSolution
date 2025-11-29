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
    int w,b;
    cin >> w >> b;
    int wk = (w*1000);
    int ans = wk/b;
    ans++;
    cout << ans << endl;
    return 0;
}