#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    while (true){
    //入力処理,　
    int n;
    cin >> n;
    if(n == 0)break;
    double s[n];    
    double s_sum = 0;
    
    for(int i = 0; i < n;i++){
        cin >> s[i];
    }

    for(int i = 0; i < n;i++){
        s_sum += s[i];
    }
    //分散を求める,
    double diff[n];
    double diff_sum = 0;
    double m = s_sum/n; //平均,
    for(int i = 0; i < n;i++){
        diff[i] = s[i] - m;
        diff_sum += diff[i]*diff[i];        
    }
    double variance = diff_sum/n;
    //標準偏差,
    double standard_deviation = sqrt(variance);

    cout << fixed << setprecision(8);
    cout << standard_deviation << endl;
    }
return 0;    
}