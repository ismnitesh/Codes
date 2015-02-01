#include<stdio.h>
int min(int a,int b,int c)
{
	if(b<a)
		a=b;
	if(c<a)
		a=c;
	return a;
}
int main()
{
	int t,i,n,a[11];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		a[0]=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=2;i<=n;i++)
		{
			a[i]=min(a[i-1]-a[i],a[i-1]+a[i],a[i-1]*a[i]);
		}
		printf("%d\n",a[n]);
	}
	return 0;
}