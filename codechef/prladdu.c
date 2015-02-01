#include<stdio.h>
int main()
{
	int t,i,num,n;
	long long int ans,sum;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		ans=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&num);
			sum=sum+num;
			ans=ans+abs(sum);
		}
		printf("%lld\n",ans);
	}
	return 0;
}