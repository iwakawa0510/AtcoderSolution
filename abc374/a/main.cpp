#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

 main(){ 
    string S;
    cin >> S;
    string keishou = (S.substr() - 3);
    cout << keishou << endl;
    return 0;

    
    if(keishou == "san"){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}