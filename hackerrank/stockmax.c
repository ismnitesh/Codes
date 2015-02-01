#include<stdio.h>
int main()
{
	int t,n,a[50007],profit,i,j,max;
	scanf("%d",&t);
	while(t--)
	{
		profit=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n-1;i++)
		{
			max=a[i];
			for(j=i+1;j<n;j++)
			{
				if(a[j]>max)
					max=a[j];
			}
			profit=profit+max-a[i];
		}
		printf("%d\n",profit);
	}
	return 0;
}