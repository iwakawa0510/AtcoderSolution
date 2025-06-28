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
    for(int i = 0;i < n;i++){
        int a,b;
        cin >> a >> b;
        if(b > a){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}