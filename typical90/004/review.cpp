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
    int h,w;
    cin >> h >> w;
    vector<vector<int>> A(h,vector<int>(w));
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            cin >> A[i][j];
        }
    }

    vector<int> row(h,0);
    vector<int> column(w,0);
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            row[i] += A[i][j];
            column[j] += A[i][j];
        }
    }

    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            cout << row[i] + column[j] - A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}