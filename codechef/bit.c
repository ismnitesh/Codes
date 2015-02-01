#include<stdio.h>
int main()
{
	int t,n,num,rem,count,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		count=0;
		for(i=1;i<=n;i++)
		{
			num=i;
			while(num)
			{
				rem=num%2;
				num=num/2;
				count=count+rem;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}