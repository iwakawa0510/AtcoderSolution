#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0;i < N;i++){
        cin >> a[i];
    }
    for(int i = 0; i< N -1;i++){
        for(int j = 0;j < N - 1;j++){
            if(a[j] < a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int Alice = 0;
    int Bob = 0;
    for(int i = 0;i < N;i++){
        if(i % 2 == 0){
            Alice += a[i];
        }else{
            Bob += a[i];
        }
    }

    cout << (Alice - Bob) << endl;
    return 0;
}