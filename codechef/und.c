#include<stdio.h>
int main()
{
	int t,n,i,a[100004],tmp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(i)
			{
				if(i%2!=0)
				{
					if(a[i-1]>a[i])
					{
						tmp=a[i-1];
						a[i-1]=a[i];
						a[i]=tmp;
					}
				}
				else
				{
					if(a[i-1]<a[i])
					{
						tmp=a[i-1];
						a[i-1]=a[i];
						a[i]=tmp;
					}
				}
			}
		}
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");
	}
	return 0;
}