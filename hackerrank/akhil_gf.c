#include<stdio.h>
int main()
{
	int t,i;
	long long int n,m,ans;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		temp=1;
		scanf("%lld%lld",&n,&m);
		for(i=1;i<n-1;i++)
		{
			ans=ans+(temp*10)%m;
			temp=temp*10;
		}
		printf("%lld\n",ans);
	}
	return 0;
}