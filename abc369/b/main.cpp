#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector<int> key(n);
    vector<char> hand(n);
    for(int i = 0;i < n;i++){
        cin >> key[i] >> hand[i];
    }
    int ans = 0;
    int r = -1;
    int l = -1;
    for(int i = 0;i < n;i++){
        if(hand[i] == 'R'){
           if(r != -1)ans += abs(key[i] - r);
           r = key[i];           
        }
        else{
           if(l != -1)ans += abs(key[i]- l);
           l = key[i];
        }
    }
    cout << ans << endl;
    return 0;
}