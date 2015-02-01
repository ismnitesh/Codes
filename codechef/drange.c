#include<stdio.h>
int main()
{
	int t,n,m,w,x,y,z,i;
	long long int a[10005],min,max;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		min=1;
		max=n;
		for(i=1;i<=n;i++)
			a[i]=i;
		while(m--)
		{
			scanf("%d%d%d%d",&w,&x,&y,&z);
			if(w==1)
			{
				for(i=x;i<=y;i++)
				{
					a[i]=a[i]+z;
					if(a[i]>max)
						max=a[i];
				}
			}
			else if(w==2)
			{
				for(i=x;i<=y;i++)
				{	
					a[i]=a[i]-z;
					if(a[i]<min)
						min=a[i];
				}
			}
		}
		printf("%lld\n",max-min);
	}
	return 0;
}