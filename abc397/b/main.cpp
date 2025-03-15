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
    string s;
    cin >> s;

        int cnt = 0;
        for(int i = 0;i < s.size()-1;i++){
            if(s[i] == 'i' && i+1 % 2 != 1){
                cnt++;
            }
            if(s[i] == 'o' && i+1 % 2 != 0){
                cnt++;
            }
        }
        cout << cnt << endl;
    return 0;
}