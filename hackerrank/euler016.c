#include<stdio.h>
int main()
{
	int t,n,i,sum,carry,x;
	scanf("%d",&t);
	while(t--)
	{
		int a[10000]={0};
		a[9999]=1;
		scanf("%d",&n);
		while(n--)
		{
			carry=0;
			for(i=9999;i>=0;i--)
			{
				x=2*a[i]+carry;
				a[i]=x%10;
				carry=x/10;
			}
		}
		sum=0;
		for(i=0;i<10000;i++)
			sum=sum+a[i];
		printf("%d\n",sum);
	}
	return 0;
}