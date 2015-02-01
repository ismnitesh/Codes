#include<stdio.h>
int main()
{
	int t,n,a[104],i,j,count,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[i])
				{
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
			}
		}
		count=0;
		for(i=1;i<n;i++)
		{
			count+=a[i]-a[0];
		}
		printf("%d\n",count);
	}
	return 0;
}