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
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> ans(n+1,0);
    for(int i = 1;i <= k;i++){
        int a,b;
        cin >> a >> b;
        ans[a]++;
        if(ans[a] >= m){
            cout << a <<" "; 
        }
    }
    return 0;
}