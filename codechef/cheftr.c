#include<stdio.h>
int main()
{
	int t;
	long long int ans,n,k;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%lld%lld",&n,&k);
		ans=ans+((n-k)*(n-k-1)*(n-k-2))/6;
		ans=ans+((k*(k-1))/2)*(n-k);
		ans=ans+(((n-k)*(n-k-1))/2)*k;
		printf("%lld\n",ans);
	}
	return 0;
}