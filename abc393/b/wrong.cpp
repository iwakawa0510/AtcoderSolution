#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    string str;

    cin >> str;
    int ans = 0;
    for(int i = 0;i < 34;i++){
        if(str.size() < 3){
            break;
        }
        if(str.size() == 3 && str != "ABC"){
            if(i == 0){
                cout << 0 << endl;
                return 0;
            }
            break;
        }
        if(str.find("A") != string::npos){
            str.erase(str.find("A"),str.find("A"));
            if(str.find("B") != string::npos){
                str.erase(str.find("B"),str.find("B"));
                if(str.find("C") != string::npos){
                    str.erase(str.find("C"),str.find("C"));
                }else{
                    break;
                }
            }else{
                break;
            }
        }else{
            break;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}