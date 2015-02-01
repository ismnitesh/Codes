#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		unsigned long long n,k,i,ans=1;
		scanf("%llu %llu",&n,&k);
		n=n-1;
		k=k-1;
		if(k>n/2)
			k=n-k;
		for(i=1;i<=k;i++)
			ans=(ans*(n--))/i;
		printf("%llu\n",ans);
	}
	return 0;
}