#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int lcm(int a,int b)
{
	int g;
	g=gcd(a,b);
	a=a/g;
	b=b/g;
	return a*b*g;
}
int main()
{
	int t,n,ans,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ans=1;
		for(i=1;i<=n;i++)
			ans=lcm(ans,i);
		printf("%d\n",ans);
	}
	return 0;
}