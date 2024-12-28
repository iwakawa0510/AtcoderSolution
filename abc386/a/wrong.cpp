#include <iostream>
using namespace std;

int main(){ 
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    if(A == B or A == C or A == D){
        if(B == C or B == D){
            if(A == B and A == C and A == D){
                cout << "No" << endl;
                return 0;
            }else if(A == B or A == C){
                cout << "Yes" << endl;
                return 0;
            }else if(A == !B and A){
                cout << "No" << endl;
                return 0;                
            }
        }else{
            cout << "No" << endl;
            return 0;            
        }
    }else{
        if(B == C and B == D){
            cout << "Yes" << endl;
            return 0;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    return 0;
}