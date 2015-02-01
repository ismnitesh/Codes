#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,c,n,z,sum=0;
		scanf("%d%d%d",&a,&b,&c);
		scanf("%d",&n);
		while(n--)
		{
			if(a>=b && a>=c)
			{
				sum=sum+a;
				a--;
			}
			else if(b>=a && b>=c)
			{
				sum=sum+b;
				b--;
			}
			else if(c>=a && c>=b)
			{
				sum=sum+c;
				c--;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}