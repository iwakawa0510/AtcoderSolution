#include <iostream>
#include <vector>
using namespace std;

#include <iostream>

int main() {
    int S[3];
    int roop = 0;
    char s;
    while (cin.get(s) && s != '\n') {
        S[roop++] = s - '0'; // 数値に変換して格納
    }

    int count = 0;
    for(int i =0;i < 3;i++){
        if(S[i] == 1){
            count++;
        }
    }
    cout << count << endl;



    return 0;
}
