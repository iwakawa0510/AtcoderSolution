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
    int n,m;
    cin >> n >> m;
    vector<int> cnt(m+1,0);
    vector<int> cnt_a(m+1,0);
    for(int i = 0;i < n;i++){
        int a,b;
        cin >> a >> b;
        cnt[a] += b;
        cnt_a[a]++;
    }
    for(int i = 1;i <= m;i++){
        double t1 = cnt[i];
        double t2 = cnt_a[i];
        double ans = (t1/t2);
        cout << fixed << setprecision(20);
        cout << ans << endl;
    }
    return 0;
}