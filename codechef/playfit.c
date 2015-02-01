#include<stdio.h>
int main()
{
	int t,n,a[100001],diff,i,min;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(i==0)
			{
				min=a[0];
				diff=0;
			}
			else
			{
				if(min>a[i])
				{
					min=a[i];
				}
				if(diff<a[i]-min)
				{
					diff=a[i]-min;
				}
			}
		}
		if(diff==0)
		{
			printf("UNFIT\n");
		}
		else
			printf("%d\n",diff);
	}
	return 0;
}