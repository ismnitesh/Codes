//https://www.hackerrank.com/contests/projecteuler/challenges/euler009
#include<stdio.h>
int main()
{
	int t,n,a,b,c,max,mul,i,j,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		max=0;
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				k=n-i-j;
				if(k>j)
				{
					a=i*i;
					b=j*j;
					c=k*k;
					if((a+b)==c)
					{
						mul=i*j*k;
						if(mul>max)
							max=mul;
					}
				}
				else
					break;
			}
		}
		if(max==0)
			printf("-1\n");
		else
			printf("%d\n",max);
	}
	return 0;
}