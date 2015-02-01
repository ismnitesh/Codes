#include<stdio.h>
#include<math.h>
int count(int a)
{
	int count=0;
	while(a)
	{
		if(a%2==1)
			count++;
		a=a/2;
	}
	return count;
}
int main()
{
	int t,c_a,c_b,n,a,b,i,ans,x;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%d%d%d",&n,&a,&b);
		c_a=count(a);
		c_b=count(b);
		if(c_a+c_b<=n)
		{
			for(i=n-1;i>=(n-c_a-c_b);i--)
				ans=ans+pow(2,i);
			printf("%d\n",ans);
		}
		else
		{
			x=c_a+c_b-n;
			for(i=n-1;i>=x;i--)
				ans=ans+pow(2,i);
			printf("%d\n",ans);
		}
	}
	return 0;
}