#include<bits/stdc++.h>
using namespace std;
unsigned long long n,k,a[1000002],sum[1000002];
int main()
{
	cin>>n>>k;
	for(int i=0;i<k;i++)a[i]=1,sum[i]=i+1;
	for(int i=k;i<=n;i++)
	{
		a[i]=(sum[i-1]-sum[i-k-1]+1000000000)%1000000000llu;
		sum[i]=(sum[i-1]+a[i])%1000000000llu;
	}
	cout<<a[n]%1000000000;
	return 0;
}