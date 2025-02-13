#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int n,t,p;
    cin >> n >> t >> p;
    vector <int> L(n);
    for(int i = 0;i < n;i++){
        cin >> L[i];
    }
    int ans = 0; 
    while(true){
        int cnt_p = 0;
        for(int i = 0;i < n;i++){
            L[i]++;
            if(L[i] >= t)cnt_p++;
        }
        if(cnt_p >= p){break;
        }
        ans++;
    }
    if(ans == 0){cout << an s << endl;
    return 0;
    }
    else{cout << ans+1 << endl;
    return 0;
    }
}