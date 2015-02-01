#include<stdio.h>
int main()
{
	int t,n,k,a[100005],b[100005],i,max;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		b[0]=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=b[i-1]+a[i];
		}
		max=b[k];
		for(i=0;(i+k)<=n;i++)
		{
			if((b[i+k]-b[i])>max)
				max=b[i+k]-b[i];
		}
		printf("%d\n",max);
	}
	return 0;
}