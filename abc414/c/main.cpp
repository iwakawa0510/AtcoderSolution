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

bool judge(const string&s){
    bool res = true;
    for(int i = 0,j = s.size()-1;i <= j;++i,--j){
        if(s[i] != s[j])return false;
    }
    return true;
}
long long base_n_to_long(string s,int a) {
	long long res = 0;
	for (int i = 0; i < n.size(); ++i) {
		res = res * a + int(n[i] - '0');
	}
	return res;
}

int main(){ 
    int a,n;
    ll ans;
    string s;
    cin >> a >> n;
    for(int i = 0;i < n;i++){
        
    }
    cout << ans << endl;
    return 0;
}