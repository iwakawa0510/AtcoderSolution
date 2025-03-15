#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[110];
    cin >> a;
    int ans=0;
    int l = strlen(a);
    for(int i = 0;i < l-1;i++){
        if(a[i] == a[i+1]){
            ans++;
        }
    }
    if(a[0] == 'o'){
        ans++;
    }
    if((l+ans) % 2 == 1){
        ans++;
    }
    cout << ans;
    return 0;
}