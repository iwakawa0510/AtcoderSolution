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
    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        int n;
        int ans = 0;
        cin >> n;
        vector<int> a(n);
        vector<int> d(n);
        for(int j = 1;j < n;j++){
            cin >> d[i];
        }
        cout << ans << endl;
    }
    return 0;
}