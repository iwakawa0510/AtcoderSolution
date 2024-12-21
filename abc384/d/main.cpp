#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

const int MAX_N = 4000000;
ll A[MAX_N];

int main(){ 
    int n;
    ll m;
    cin >> n >> m;

    ll total_sum = 0;
    
    for(int i = 0;i < n;i++){
        cin >> A[i];
        total_sum += A[i];
    }
    
    m %= total_sum;

    ll current_sum = 0;
    int left = 0;

    for(int right = 0;right < 2 * n;++right){
        current_sum += A[right % n];
        while (current_sum > m){
            current_sum -= A[left % n];
            ++left;
        }    
        if(current_sum == m){
        cout << "Yes" << endl;
        return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;
}