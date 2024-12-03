#include <iostream>
#include<string>
using namespace std;

int main() {
    string matrix;
    while(true){
        //入力,
        cin >> matrix;
        if(matrix[0] == '0')break;
        //文字列から数値を取り出し総和を計算する,
        int num = 0;
        int sum = 0;
        for(int i = 0;i < matrix.size();i++){
            num = matrix[i] - '0';
            sum += num;
        }
        cout << sum << endl;
        
    }

    return 0;
}