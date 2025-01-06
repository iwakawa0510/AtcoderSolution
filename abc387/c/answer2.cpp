#import<ios>
int d[19],m,t,i,j;long long l,r,s,z;
long long p(int a,int b){for(z=1;b;--b)z*=a;return z;}
long long _(long long x){
	for(s=t=0;x;x/=10)d[t++]=x%10;
	for(m=d[i=--t];i--;)for(j=10;--j;s+=p(j,i));
	for(j=m;--j;s+=p(j,t));
	for(;t--;){
		s+=std::min(d[t],m)*p(m,t);
		if(d[t]>=m)break;
	}
	return s+(t==-1);
}
main(){scanf("%lld%lld",&l,&r),printf("%lld",_(r)-_(l-1));}