#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>

// C++20or23でのみ動作,

using namespace std;

int main(){ 
    int n,m;
    cin >> n >> m;
    vector <int> A(n),B(m);
    for(int i = 0;i < n;i++){
        cin >> A[i];
    }    
    for(int i = 0;i < m;i++){
        cin >> B[i];
    }

    auto C = A;
    for (auto x : B)C.push_back(x);
    
    sort(C.begin(),C.end());

    set<int> st(A.begin(), A.end());
    
    for (int i = 0; i < n + m - 1;i++) {
        if(st.contains(C[i]) && st.contains(C[i + 1])){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}