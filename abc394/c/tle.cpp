#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    while(true){
        if(s.find("WA") == string::npos)break;

        if(s.find())s.replace(s.find_first_of("WA"),s.find_first_of("WA")+1,"AC");
    }
    cout << s << endl;
    return 0;
}