#include<stdio.h>
int main()
{
	int t;
	long long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",n-1);
	}
	return 0;
}