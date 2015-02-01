#include<stdio.h>
int dig_sum(int num)
{
	int sum=0;
	while(num)
	{
		sum=sum+(num%10);
		num=num/10;
	}
	return sum;
}
int main()
{
	int t,i,n,x,flag;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		flag=0;
		for(i=0;i<=n;i++)
		{
			x=i+dig_sum(i);
			if(x==n)
			{
				printf("%d\n",i);
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("NONE\n");
	}
	return 0;
}