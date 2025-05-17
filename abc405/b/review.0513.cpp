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
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int num = 0;num <= n;num++){
        set<int> st(a.begin(),a.end());
        if(st.size() != m){
            cout << num << endl;
            return 0;
        }
        if(!a.empty())a.pop_back();
    }
    return 0;
}