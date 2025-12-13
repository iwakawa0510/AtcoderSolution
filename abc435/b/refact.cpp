#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <array>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){ 
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }

    int ans = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i+1;j++){
			int s=0;
			for(int k=j;k<=i;k++)s+=a[k];
			bool ok=true;
			for(int k=j;k<=i;k++)if(s%a[k]==0){
                cout << "index:"<< j <<" "<<  k << endl;
                ok=false;}
			if(ok)ans++;
		}
	}
    cout << ans << endl;
    return 0;
}