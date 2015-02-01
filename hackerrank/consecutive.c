#include<stdio.h>
int main()
{
	int t,n,k,i,j,z;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		int a[n],sum=0,count=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				sum=0;
				for(z=i;z<=j;z++)
				{
					sum=sum+a[z];
				}
					if(sum%k==0)
						count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}