#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double x1,y1,x2,y2;//xy変数,
    cin >> x1 >> y1 >> x2 >> y2;
    double x_diff,y_diff;//xy座標,
    double xy_distance;//距離,
    if(x1 > x2){
        x_diff = x1 - x2;
    }else{
        x_diff = x2 - x1;
    }
        if(y1 > y2){
        y_diff = y1 - y2;
    }else{
        y_diff = y2 - y1;
    }
    xy_distance = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
    cout << fixed << setprecision(9) << xy_distance << endl;
}