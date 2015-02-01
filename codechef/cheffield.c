#include<stdio.h>
#include<math.h>
int prime(long long int x)
{
	long long int i;
	if(x==1)
		return 0;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	long long int t,l,b,i,j,ans;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&l,&b);
		while(prime(l))
			l--;
		while(prime(b))
			b--;
		ans=l*b;
		printf("%lld\n",ans);
	}
	return 0;
}