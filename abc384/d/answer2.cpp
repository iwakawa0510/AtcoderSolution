#include<cstdio>
#include<vector>
#define ll long long
ll read(){
	ll num=0;
	char ch;ch=getchar();
	while(ch<48||ch>57)ch=getchar();
	while(ch>47&&ch<58){
		num=(num<<1)+(num<<3)+(ch^48);
		ch=getchar();
	}return num;
}
ll min(ll x,ll y){return x<y?x:y;}
ll max(ll x,ll y){return x>y?x:y;}
const int N=4e5+5;
int n;
ll m,a[N<<1];
ll sum,S;
int main(){
	n=read(),m=read();
	for(int i=1;i<=n;i++)a[i+n]=a[i]=read();
	for(int i=1;i<=n;i++)sum+=a[i];
	m%=sum;
	for(int i=1,j=0;i<=2*n;i++){
		S+=a[i];
		while(S>m){
			S-=a[j];
			j++;
		}
		if(S==m){
			printf("Yes\n");
			return 0;
		}
	}printf("No");
} 