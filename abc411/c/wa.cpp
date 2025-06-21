#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
#include <utility>
using namespace std;

int main(){ 
    int n,q;
    cin >> n >> q;
    vector<int> a(q);
    for(int i = 0;i < q;i++){
        cin >> a[i];
    }

    vector<bool>  wb (n);
    int cnt = 0;
    for(int i = 0;i < q;i++){
        wb[i] = !wb[i];//Query,

        //カウント,
        int j = n;
        while(j--){
            bool lr = true;
            int l,r = 0;
            if(wb[j] && lr){
                l = wb[j];
                lr = false;
            }else if(wb[j] && !lr){
                r = j;
                lr = true;
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}