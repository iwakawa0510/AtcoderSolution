#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    //文字列strを読み込む,
    string str;
    cin >> str;

    //命令数を読み込む,
    int q;
    cin >> q;
    string instruction_name;//命令名,
    int a,b;//文字範囲,
    for(int i = 0;i < q;i++){
        cin >> instruction_name >> a >> b;
        if(instruction_name == "print"){
            cout << str.substr(a, b - a + 1) << endl;
        }
        if(instruction_name == "reverse"){
            reverse(str.begin() + a,str.begin() + b + 1);
        }
        if(instruction_name == "replace"){
           string p;
           cin >> p; 
           str.replace(a, b - a + 1,p);
        }
    }



    return 0;
}