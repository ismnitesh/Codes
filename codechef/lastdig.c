#include<stdio.h>
int func(int num)
{
	int sum=0,x;
	while(num)
	{
		x=num%10;
		if(x%2==0)
			sum=sum+(2*x);
		else
			sum=sum+x;
		num=num/10;
	}
	sum=sum%10;
	return sum;
}
int main()
{
	int t,a,b,sum,i,count;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		count=0;
		scanf("%d%d",&a,&b);
		for(i=a;i<(a+11);i++)
		{
			if(count==(b-a+1))
				break;
			if(i%10==0)
			{
				break;
			}
			else
			{
				sum=sum+func(i);
				count++;
			}
		}
		for(i=b;i>=(b-11);i--)
		{
			if(count==(b-a+1))
				break;
			if((i+1)%10==0)
			{	
				break;
			}
			else
			{
				sum=sum+func(i);
				count++;
			}
		}
		sum=sum+(((b-a-count+1)/10)*45);
		printf("%d\n",sum);
	}
	return 0;
}