#include<stdio.h>
int fact(int n)
{
	int i,ans=1;
	for(i=1;i<=n;i++)
		ans=(ans*i)%3;
	return ans;
}
int main()
{
	int t,i,x,y,z;
	int n,ans=0;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%d",&n);
		for(i=0;i<=n;i++)
		{
			x=fact(n);
			y=fact(i);
			z=fact(n-i);
			if(y!=0 && z!=0)
				ans=ans+((x/y)/z)%3;
			ans=ans%1000000007;
		}
		printf("%d\n",ans);
	}
	return 0;
}