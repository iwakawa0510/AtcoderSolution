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
    //input,
    vector<string> s(n),t(n);
    for(int i = 0;i < n;i++){
        cin >> s[i];
    }
    for(int i = 0;i < n;i++){
        cin >> t[i];
    }

    //initialize,
    int ans = 1e9;

    for(int rot = 0;rot < 4;rot++){
        //calc
        {int now = rot;
            for(int i = 0;i < n;i++){
                for(int j = 0;j < n;j++){
                    if(s[i][j] != t[i][j]){
                        now++;
                    }
                }
            }
            ans = min(ans,now);
        }
        //rotate
        {vector<string> r = s;
            for(int i = 0;i < n;i++){
                for(int j = 0;j < n;j++){
                    r[j][n - 1 - i] = s[i][j];
                }
            }
        s = r;
        }
    }
    cout << ans << endl;
    return 0;
}