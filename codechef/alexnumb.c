#include<stdio.h>
int main()
{
	int t,i,a;
	long long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
		}
		printf("%lld\n",n*(n-1)/2);
	}
	return 0;
}