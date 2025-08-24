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
    int Q;
    cin >> Q;
    vector<int> x (1,101);
    for(int i = 0;i < Q;i++){
        int q;
        int t;
        cin >> q;
        if(q == 1){
            cin >> t;            
            if(t <= x.back()){
                x.push_back(t);
            }else{
                x.push_back(t);
                sort(x.rbegin(),x.rend());
            }
        }else if(q == 2){
            cout << x.back() << endl;
            x.pop_back();
        }
    }
    return 0;
}