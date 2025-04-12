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
    int cnt = 0;
    bool login = false;
    cin >> n;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        if(s == "login"){
            login = true;
        }else if(s == "logout"){
            login = false;
        }else if(s == "private"){
            if(!login){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}