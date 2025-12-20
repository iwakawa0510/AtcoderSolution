#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;
using ll = long long;

int main(){ 
    //input,
    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        int n;
        cin >> n;
        vector<int> w(n),p(n);
        ll sum_w = 0;
        ll sum_p = 0;
        ll max_t = 0;
        vector<int> max_c(n);
        int res;
        //input,
        for(int j = 0;j < n;j++){
            cin >> w[j] >> p[j];
            sum_w += w[j];
            sum_p += p[j];
            if((w[j]+p[j])>= max_t){
                max_t = (w[j]+p[j]);
                max_c.push_back(j);
            }    
        }
        //処理,
        for(int j = n;0 <= j;j--){
            if(sum_p < sum_w){
                sum_w - w[max_c.back()];
                max_c.pop_back();
            }else{
                int res = j;
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}