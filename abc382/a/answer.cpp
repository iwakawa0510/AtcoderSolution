#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    cin.ignore(); // 改行を無視

    string str;
    getline(cin, str); // 一行全体を読み取る

    int cnt1 = 0;
    for(int i = 0; i < N; i++){
        if(str.at(i) == '@') cnt1++;
    }

    cout << ((N-cnt1) + M) << endl;
    return 0;
}