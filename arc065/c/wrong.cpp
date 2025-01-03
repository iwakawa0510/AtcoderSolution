#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    string T ={};
    string S;
    cin >> S;
    string a = "dream";
    string b = "dreamer";
    string c = "erase";
    string d = "eraser";

    //文字列Sに文字列abcdが含まれるかを確認して含まれない場合は"No"を返す,
    if(S.rfind(a) == !string::npos || S.rfind(b) == !string::npos || S.rfind(c) == !string::npos || S.rfind(d) == !string::npos){
        while(true){
        if(T == S)break;//組み合わせを発見できたらループを抜ける
        if(S.rfind(a)){
            
        }
        }
        cout << "Yes" << endl;
        return 0;

    }else{
        cout << "No" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;   
}