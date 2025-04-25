#include <iostream>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    int a[200];
    bool b = true;
    int ans = 0;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    
    while(b){
        for(int i = 0;i < n;i++){
            if(a[i] % 2 == 0){
                a[i] /= 2;
                
            }else{
                b = false;
                break;
            }
            
        }
        ans++;
    }
    ans--;

    cout << ans << endl;
    return 0;
}