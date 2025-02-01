#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int m;
    cin >> m;
    vector<int> A;
    for(int k = 0;k <= 10;k++){
        for(int i = 0;i < (m%3);i++){
            A.push_back(k);
        }
        m /= 3;
    }
    cout << A.size() << endl;

    for (size_t i = 0; i < A.size();i++) {
    cout << A[i];
    if (i < A.size() - 1) {
        cout << ' ';
    } else {
        cout << '\n';
    }
    }
    return 0;
}