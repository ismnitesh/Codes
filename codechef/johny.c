#include<stdio.h>
int main()
{
	int x,i,j,t,n,k,a[101],y,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&k);
		x=a[k-1];
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
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==x)
			{
				ans=i;
				break;
			}
		}
		printf("%d\n",ans+1);
	}
	return 0;
}