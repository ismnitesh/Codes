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
	int t,n,a[105],g,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n>=2)
		{
			scanf("%d",&a[0]);
			scanf("%d",&a[1]);
			g=gcd(a[0],a[1]);
			for(i=2;i<n;i++)
			{
				scanf("%d",&a[i]);
				g=gcd(g,a[i]);
			}
			if(g==1)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
		{
			scanf("%d",&a[0]);
			if(a[0]>1)
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return 0;
}