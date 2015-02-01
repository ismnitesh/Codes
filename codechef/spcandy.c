#include<stdio.h>
int main()
{
	int t;
	long long int n,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		if(k!=0)
			printf("%lld %lld\n",n/k,n%k);
		else
			printf("0 %lld\n",n);
	}
	return 0;
}