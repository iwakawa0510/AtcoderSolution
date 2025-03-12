#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;

#define MAXN 100

int main(){ 
    int n;
    cin >> n;

    int a[2][MAXN];
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    
    int s[2][MAXN + 1];
    for(int i = 0;i < 2;i++){
        s[i][0] = 0;
        for(int j = 0;j < n;j++){
            s[i][j+1] = s[i][j] + a[i][j];
        }
    }
    
    int max_c = 0;
    for (int j = 0; j < n; j++) {
    max_c = max(max_c, s[0][j + 1] + s[1][n] - s[1][j]);
    }

    cout << max_c << endl;
    return 0;
}