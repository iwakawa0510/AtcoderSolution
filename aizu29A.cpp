#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    int i = 0;
    while (i < str.length()) {
        char c = str[i];
        if (isupper(c)) {
            str[i] = tolower(c); // 大文字を小文字に変換
        } else if (islower(c)) {
            str[i] = toupper(c); // 小文字を大文字に変換
        }
        i++;
    }

    cout << str << endl;

    return 0;
}


