#include<stdio.h>
int main()
{
	int t,a[35],b[35],n,x,y,i,j,count=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(a[j]>a[j+1])
				{
					y=a[j];
					a[j]=a[j+1];
					a[j+1]=y;
				}

				if(b[j]>b[j+1])
				{
					y=b[j];
					b[j]=b[j+1];
					b[j+1]=y;
				}
			}
		}
	/*	for(i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");
		for(i=0;i<n;i++)
			printf("%d ",b[i]);
		printf("\n"); */	
		i=0;
		j=0;
		count=0;
		while(j<n)
		{
			if(a[i]<=b[j])
			{
				i++;
				j++;
				count++;
			}
			else
				j++;
		}
		printf("%d\n",count);
	}
	return 0;
}