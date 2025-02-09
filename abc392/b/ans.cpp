#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int n, m;
    cin >> n >> m;
    
    vector<int> A(m);
    for(int i = 0; i < m; i++) {  // 修正: 0からm-1
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    // 1~n のベクター作成
    vector<int> X(n);
    for(int i = 0; i < n; i++) {  // 修正: 0からn-1
        X[i] = i + 1;
    }

    // A に含まれる要素を削除
    for(int i = 0; i < m; i++) {
        X.erase(remove(X.begin(), X.end(), A[i]), X.end());
    }

    int ans_size = X.size();
    cout << ans_size << endl;

    if(ans_size == 0) {
        cout << " ";
        return 0;
    }

    for(int i = 0; i < ans_size; i++) {  // 修正: 0からsize-1
        cout << X[i] << " ";
    }
    return 0;
}
