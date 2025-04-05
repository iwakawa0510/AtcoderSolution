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
    int ans = -1;
    if(400%n == 0){
        ans = 400/n;
    }
    
    cout << ans << endl;
    return 0;
}