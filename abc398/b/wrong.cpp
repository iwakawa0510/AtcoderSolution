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
    vector<int> a(7);
    for(int i = 0;i < a.size();i++){
        cin >> a[i];
    }
    bool judge = false;
    bool judge_x = false;
    for(int i = 0;i < 7;i++){
        int x = a[i];
        int xc = 0;
        auto b = a;
        vector<int> t;
        
        for(int j = 0;j < b.size();j++){
            if(x == b[j]){
                b.erase(b.begin()+j);
                xc++;
            }
            t[j] = b[j];
        }
        if(3 <= xc < 6){
            judge_x = true;
        }
        if(judge_x == false)continue;
        int y = t[i];
        int yc = 0;
        if(x == y)continue;

        for(int j = 0;j < t.size();j++){
            if(y == t[j]){
                t.erase(t.begin()+j);
                yc++;                
            }
        }
        if(2 <= yc && judge_x){
            judge = true;
            break;
            }
    }
    
    if(judge){
        cout << "Yes" << endl;
    }
    cout << "No" << endl;
    return 0;
}