#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    double x,y;//現在座標,
    double c,d;//次回座標,
    double cost = 0;
    for(int i = 0;i < n;i++){
        //原点で初期化,
        if(i == 0){
            x = 0;
            y = 0;
        }
        cin >> c >> d;
        //距離を計算,
        cost += sqrt((x - c) * (x - c) + (y - d) * (y - d));
        //現在座標を更新,
        x = c;
        y = d;
    }
    cout << fixed << setprecision(10);
    cout << cost + sqrt((x * x) + (y * y)) << endl;
    return 0;
}