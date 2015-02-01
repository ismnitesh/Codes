#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,i,j,count;
	int a[500000]={0};
	for(i=2;i<=sqrt(500000);i++)
	{
		if(a[i]==0)
		{
			for(j=i+1;j<500000;j++)
			{
				if(j%i==0)
					a[j]=1;
			}
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		for(i=2;i<=500000;i++)
		{
			if(a[i]==0)
				count++;
			if(count==n)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
}