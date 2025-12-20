#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>

#include <deque>//bool
using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    vector<deque<bool>> ok(n,deque<bool>(n,false));
    int nh = ((n-1)/2);
    int roop = (n*n)-1;
    int r = 0;
    int c = nh;

    a[r][c] = 1;
    ok[r][c] = true;

    int k = 1;
    for(int i = 0;i < roop;i++){
        k++;
        r = ((r-1+n)%n);
        c = (c+1%n);
        cout << r <<" "<< c << endl;
        // bool ok_grid = ok[(r-1%n)][(c+1%n)];
        // if(!ok_grid){
        //     a[(r-1%n)][(c+1%n)] = k;
        //     ok[(r-1%n)][(c+1%n)] = true;
        // }else{
        //     a[(r+1%n)][c] = k+1;
        //     ok[(r+1%n)][c] =true;
        // }
    }

    // for(int i = 0;i < n;i++){
    //     for(int j = 0;j < n;j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}