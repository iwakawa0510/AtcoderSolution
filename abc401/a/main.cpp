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
    int s;
    cin >> s;
    if(200 <= s && s <= 299){
        cout << "Success" << endl;
    }else{
        cout << "Failure" << endl;
    }
    return 0;
}