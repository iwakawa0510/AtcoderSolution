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
    vector<vector<char>> c(n, vector<char>(n));
    for (int i = 0; i < n; i++){
        int j = (n + 1) - 1;
        
        if(i <= j){
            int l = j - i;
            if(i % 2 == 0){
                for(int h = i;h < l;h++){
                    for(int w = i;w < l;w++){
                        c[h][w] = '#';
                    }
                }                                
            }else{
                for(int h = i;h < l;h++){
                    for(int w = i;w < l;w++){
                        c[h][w] = '.';
                    }
                }  
            }
        }
	}

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}