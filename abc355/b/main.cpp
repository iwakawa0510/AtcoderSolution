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
    int n,m;
    cin >> n >> m;
    vector <int> A(n),B(m),C(n+m);
    for(int i = 0;i < n;i++){
        cin >> A[i];
    }    
    for(int i = 0;i < m;i++){
        cin >> B[i];
    }
    auto C = A;
    C.insert(B.begin(),B.end(),int);
    for (int i = 0; i < N + M - 1; ++i) {
        if (st.contains(C[i]) && st.contains(C[i + 1])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;C.insert(C.end(), A.begin(), A.end());
    C.insert(C.end(), B.begin(), B.end());
    ort(C.begin(),C.end());
    
    set<int> st(A.begin(),A.end());

    for (int i = 0; i <  n+m - 1;i++) {
        if (st.contains(C[i]) && st.contains(C[i + 1])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
} 