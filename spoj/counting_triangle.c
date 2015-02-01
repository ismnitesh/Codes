#include<stdio.h>
int main()
{
	int t;
	long long int n,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ans=(n*(n-1)*(n+7)+(6*n))/6;
		printf("%lld\n",ans);
	}
	return 0;
}