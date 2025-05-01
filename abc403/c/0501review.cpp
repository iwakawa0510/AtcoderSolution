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

    vector<set<int>> user(n+1);
    vector<bool> all(n+1,false);

    for(int i = 0;i < q;i++){
        int t,x,y;
        cin >> t >> x;
        if(t == 1){
            cin >> y;
            user[x].insert (y);
        }else if(t == 2){
            all[x] = true;
        }else if(t == 3){
            cin >> y;
            if(all[x] || user[x].count(y)){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
        }
    }
    return 0;
}