#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t,i,n,a[1003],ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		ans=gcd(a[0],a[1]);
		for(i=2;i<n;i++)
		{
			ans=gcd(ans,a[i]);
		}
		printf("%d\n",ans);
	}
	return 0;
}