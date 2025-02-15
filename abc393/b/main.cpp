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
    int n = str.size();
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){        
            for(int k = j+1;k < n;k++){                
                if(j - i == k - j && str[i] == 'A' && str[j] == 'B' && str[k] == 'C'){
                    ans++;                   
                }     
            }
        }
    }
    cout << ans << endl;
    return 0;
}