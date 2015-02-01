#include<stdio.h>
int main()
{
	int t;
	long long int n,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ans=n*n;
		ans=ans%1000000007;
		printf("%lld\n",ans);
	}
	return 0;
}