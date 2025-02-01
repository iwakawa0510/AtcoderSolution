#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;


int main(){ 
    int n,m;
    cin >> n >> m;

    vector<string> str_s(n);
    vector<string> str_t(m);

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> str_s[i][j];
        }
    }

    for(int i = 0;i < m;i++){
        for(int j = 0;j < m;j++){
            cin >> str_t[i][j];
        }
    }

    for (int a = 0;a <= n - m;a++) {
        for(int b = 0;b <= n - m;b++){
            bool match = true;
            for(int i = 0;i < m;i++) {
                for (int j = 0;j < m;j++) {
                    if(S[a + i][b + j] != T[i][j]){
                        match = false;
                        break;
                    }
                }
                if (!match) break;
            }
            if(match){
                cout << a + 1 << " " << b + 1 << endl;
                return 0;  // 解が一意なので即終了
            }
        }
    }
    return 0;   
}    