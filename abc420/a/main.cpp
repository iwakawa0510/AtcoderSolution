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
    int x,y;
    cin >> x >> y;
    int sum = (x+y);
    if(12 < sum){
        sum -= 12;
    }
    cout << sum << endl;
    return 0;
}