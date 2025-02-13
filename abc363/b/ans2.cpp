#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n,t,p,x;	
	int l[100];

	cin >> n >> t >> p;

	for(int i = 0; i < n; i++){
		cin >> x;
		l[i]=max(0,t-x);
	}
	sort(l,l+n);

	cout << l[p-1] << endl;

	return 0;
}
