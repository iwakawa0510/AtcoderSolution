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
    double a,b;
    cin >> a >> b;
    double ans;
    double temp = a/b;
    ans = round(temp);
    cout << ans << endl;

    return 0;
}