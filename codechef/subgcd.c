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
	int t,a[100006],n,g,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%d",&a[0]);
		scanf("%d",&a[1]);
		g=gcd(a[0],a[1]);
		for(i=2;i<n;i++)
		{
			scanf("%d",&a[i]);
			g=gcd(g,a[i]);
		}
		if(g==1)
			printf("%d\n",n);
		else
			printf("-1\n");
	}
	return 0;
}