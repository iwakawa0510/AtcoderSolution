#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// 2重ループの省略,
int main () {
    int n, m;
    string str;
    cin >> n >> m;
    cin >> str;
    int count = 0;
    for (int i=n-1; i>=0; i--) {
        if (str.at(i) == '@') {
            str.at(i) = '.';
            count++;
            if (count == m) {
                break;
            }
        }
    }
    cout << str << endl;
}