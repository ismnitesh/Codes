#include<stdio.h>
int main()
{
	long long int t,n,a,b,x,ans;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&n,&a,&b);
		if(a==b)
			printf("%d",(n-1)*a);
		else
		{
		if(a>b)
		{
			x=a;
			a=b;
			b=x;
		}
		ans=(n-1)*a;
		printf("%lld ",ans);
		n--;
		while(n--)
		{
			ans=ans+b-a;
			printf("%lld ",ans);
		}
	}
		printf("\n");
	}
	return 0;
}