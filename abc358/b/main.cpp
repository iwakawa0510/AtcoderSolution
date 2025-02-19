#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int n,a;
    int ans = 0;
    in >> n >> a;
    vector <int> T(n);
    
    for(int i = 0;i < n;i++){
        cin >> T[i];
    }
    int time = 0;
    for(int i = 0;i < n;i++){
        time = max(time,T[i]) + a;
        cout << time << endl;
    }
    return 0;
}