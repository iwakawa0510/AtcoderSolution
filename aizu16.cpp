#include <iostream>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    const int MAX_A = 1000000;
    const int MIN_A = -1000000;
    
    int max = MIN_A,min = MAX_A;
    long long sum = 0;
    
    for(int i = 0; i < n;i++){
    int a;
    cin >> a;
    if( max < a){
        max = a;
    }
    if( min > a){
        min = a;
    }
        sum += a;
    }

    cout << min << " " << max <<  " " << sum << endl;
    
return 0;
}