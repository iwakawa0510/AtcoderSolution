#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n,t,p;	
	int l[100];
	int cnt;

	cin >> n >> t >> p;
	for(int i = 0; i < n; i++)cin >> l[i];

	for(int i = 0; i < t; i++){
		cnt=0;
		for(int j = 0; j < n; j++){
			if(l[j]+i >= t)cnt++;
		}
		if(cnt>=p){
			cout<< i <<endl;
			return 0;
		}
	}
	return 0;
}
