#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    int m;
    cin >> m;
    vector<int> A;
    while (m > 0) {
    A.push_back(m % 3);
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