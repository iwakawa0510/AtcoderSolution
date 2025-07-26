#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;
void gen(int n,int k,string t,vector<string>&S,vector<string>&f){
    if(n == k){
        f.push_back(t);
        return;
    }
    for(int i = 0;i < S.size();i++){
        gen(n+1,k,t+S[i],S,f);
    }
}
int main(){ 
    int n,k,x;
    cin >> n >> k >> x;
    vector<string> S(n);
    for(int i = 0;i < n;i++){
        cin >> S[i];
    }

    vector<string> f(0,"");
    gen(0,k,"",S,f);
    sort(f.begin(),f.end());
    cout << f.at(x-1) << endl;

    return 0;
}