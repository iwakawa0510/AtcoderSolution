//https://atcoder.jp/contests/abc404/submissions/65458553,
#include <bits/stdc++.h>
using namespace std;

int n,m,x,y,i,a[1000007],f[1000007];
int z(int x){
	return x==f[x]?x:f[x]=z(f[x]);
}
int main(){
	cin>>n>>m;
	for(i=1;i<=n;i++) f[i]=i;
	while(m--){
		cin>>x>>y;
		++a[x],++a[y];
		x=z(x),y=z(y);
		if(x-y) f[x]=y;
	}
	for(i=1;i<=n;i++)
		if(a[i]-2||z(i)!=z(1)){
			cout<<"No";
			return 0;
		}
	cout<<"Yes";
	return 0;
}