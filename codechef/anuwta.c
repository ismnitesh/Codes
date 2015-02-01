#include<stdio.h>
int main()
{
	int t;
	long long int ans,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ans=n*(n+3);
		ans=ans/2;
		printf("%lld\n",ans);
	}
	return 0;
}