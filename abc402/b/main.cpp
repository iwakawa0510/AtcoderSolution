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
    int q;
    cin >> q;
    vector<int> x;
    int cnt = 0;
    for(int i = 0;i < q;i++){
        int n,m;
        cin >> n;
        if(n == 1){
            cin >> m;
            x.push_back(m);
        }else if(n == 2){
            cout << x[cnt] << endl;
            cnt++;
        }
    }
    return 0;
}