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
    int s;
    cin >> n >> s;
    int t;
    int temp = 0;
    int now = 0;
    for(int i = 0;i < n;i++){
        cin >> t;
        now = temp;
        temp += t - now;
        if((temp - now) >  s){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}