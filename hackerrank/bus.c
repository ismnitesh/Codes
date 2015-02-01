#include<stdio.h>
int main()
{
	int n,a[100003],max,total,flag,sum,i,j;
	scanf("%d",&n);
	max=0;
	total=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		total=total+a[i];
		if(a[i]>max)
			max=a[i];
	}
	for(i=max;i<=total;i++)
	{
		sum=0;
		flag=1;
		if(total%i==0)
		{
			for(j=0;j<n;j++)
			{
				sum=sum+a[j];
				if(sum==i)
				{
					sum=0;
				}
				if(sum>i)
				{
					flag=0;
					break;
				}
				if(j==n-1 && sum!=0)
					flag=0;
			}
			if(flag==1)
				printf("%d ",i);
		}
	}
	return 0;
}