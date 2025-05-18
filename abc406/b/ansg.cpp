#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;
using ll = unsigned long long;

ll GetDigit(ll num){
	ll digit = 0;
	while(num != 0){
		num /= 10;
		digit++;
	}
	return digit;
}
int main(){ 
    int n,k;
    cin >> n >> k;
    ll a;
    ll ans = 1;
    ll digit_ans = 0;
    ll digit_a = 0;
    for(int i = 0;i < n;i++){
        cin >> a;

        
        if (ans > (~0ULL) / a) {
            ans = 1;
        } else {
            ans *= a;
            digit_ans = GetDigit(ans);
            if(digit_ans >= k+1){
                ans = 1;
            }
        }
    }
    cout << ans << endl;
    return 0; 
}