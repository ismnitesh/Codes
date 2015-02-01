#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t,n,a[100004],g,i,flag;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		g=0;
		flag=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			g=gcd(g,a[i]);
		}
		for(i=2;i<=sqrt(g);i++)
		{
			if(g%i==0)
			{
				printf("%d\n",i);
				flag=1;
				break;
			}
		}
		if(g==1)
			printf("-1\n");
		else if(flag==0)
			printf("%d\n",g);
	}
	return 0;
}