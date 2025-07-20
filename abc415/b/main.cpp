#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int main(){ 
    string s;
    cin >> s;
    int m = s.size();
    int cnt = 0;
    for(int i = 0;i < m;i++){
        pair<int,int> p;
        if(s[i] == '#'){
            if(cnt == 0){
                p.first = i+1;
                cnt = 1;
                cout << p.first;
            }else if(cnt == 1){
                p.second = i+1;
                cnt = 0;
                cout << "," << p.second << endl;
            }
        }
    }
    return 0;
}