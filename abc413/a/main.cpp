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

    int sum = 0;
    for(int i = 0;i < n;i++){
        int a;
        cin >> a;
        sum += a;
    }
    if(sum > m){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }

    return 0;
}