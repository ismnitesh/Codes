#include<stdio.h>
int main()
{
	int t,n,a[108],count,sum,i,avg;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		count=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{	
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		avg=sum/n;
		for(i=0;i<n;i++)
		{
			if(a[i]>avg)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}