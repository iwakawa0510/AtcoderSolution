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
    int x,y;
    cin >> x >> y;
    int cnt = 0;
    for(int i = 1;i <= 6;i++){
        for(int j = 1;j <= 6;j++){
            if(x <= (i+j) || y <= abs(i-j))cnt++;
        }
    }
    double cnt_d = cnt;
    double all_p = 36;
    double ans = cnt_d/all_p;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}