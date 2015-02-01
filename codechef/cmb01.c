#include<stdio.h>
int rev(int x)
{
	int ans=0;
	while(x)
	{
		ans=ans*10+x%10;
		x=x/10;
	}
	return ans;
}
int main()
{
	int t,a,b,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		a=rev(a);
		b=rev(b);
		ans=a+b;
		ans=rev(ans);
		printf("%d\n",ans);
	}
	return 0;
}