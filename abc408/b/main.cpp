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
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    set<int> c(a.begin(),a.end());
    int m = c.size();
    cout << m << endl;
    for(int x:c){
        cout << x << " ";
    }
    return 0;
}