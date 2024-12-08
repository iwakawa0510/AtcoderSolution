#include <iostream>
using namespace std;

int main(){ 
    int N;
    cin >> N;
    int V_temp = 0;
    int answer = 0;
    int T[100],V[100];
    for (int i = 0;i < N ;i++){
        cin >> T[i] >> V[i];

        V_temp += V[i];
        answer = V_temp;
        V_temp - 1;
    }
    cout << answer <<endl;
    return 0;
}