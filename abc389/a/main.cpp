#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){ 
    string str;
    cin >> str;

    int a,b;
    a = int(str[0] - '0');
    b = int(str[2] - '0');

    cout << a  << endl;

    return 0;
}