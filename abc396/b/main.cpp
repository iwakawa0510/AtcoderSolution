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
    int m;
    vector<int> d(110);
    int temp;
    for(int i = 0;i < n;i++){
        cin >> m;
        if(m == 1){
            cin >> temp;
            d.push_back(temp); 
        }else{
            int ans = d.back();
            d.pop_back();
            cout << ans << endl;
        }
    }
    return 0;
}