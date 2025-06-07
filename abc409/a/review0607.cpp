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
    string t,a;
    cin >> n >> t >> a;
    for(int i = 0;i < n;i++){
        if(t[i] == 'o' && a[i] == 'o'){//string型の元はchar型なので ' で囲む,
            cout << "Yes" << endl;
            return 0;
        }
    }cout << "No" << endl;
    return 0;
}