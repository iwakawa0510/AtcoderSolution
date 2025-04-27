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
    int n,m,q;
    cin >> n >> m >> q;
    vector<vector<bool>> user(n+1);
    
    for(int i = 0;i < q;i++){
        int qu,x,y;
        cin >> qu;
        if(qu == 1){
            cin >> x >> y;
            user.at(x).at(y) = true;
        }else if(qu == 2){
            cin >> x;
            for(int j = 1;j <= m;j++){
                user.at(x).at(j) = true;
            }
        }else if(qu == 3){
            cin >> x >> y;
            if(user.at(x).at(y)){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}