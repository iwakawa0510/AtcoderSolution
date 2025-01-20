#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int No(){
    cout << "No" << endl;
    exit(0);
}

int Yes(){
    cout << "Yes" << endl;
    exit(0);
}

int main(){ 
    string str;
    cin >> str;

    if(!(str.size()%2 == 0))No();//文字列長が奇数の時にNoを返す,

    for(int i = 0;i < str.size();i += 2){
        if(str[i] != str[i+1]){
            No();
        }
    }
    int cnt[26] = {0};
    for (char c : str) {
        cnt[c - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (cnt[i] != 0 && cnt[i] != 2) {
            No();
        }
    }
    Yes();
    return 0;
}