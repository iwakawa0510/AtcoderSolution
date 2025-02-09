#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int n;
    cin >> n;

    vector<string> str (n);
    for(int i = 0;i < n;i++){
        cin >> str[i];
    }
    const int m = 100;
    vector<string> str_ans (m,string(n,'*'));
                      
    for(int i = 0;i < n;i++){    
        for(int j = 0;j < str[i].size();j++){
            str_ans[j][n-i-1] = str[i][j];
        }
    }
    for(int i = 0;i < m;i++){
        while(str_ans[i].back() == '*'){
            str_ans[i].pop_back();
        }
        cout << str_ans[i] << endl;
    }
    
    return 0;
}