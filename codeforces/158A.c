#include<stdio.h>
int main()
{
	int n,k,a[1000],i,count;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	if(a[k]>0)
	{
		count=k-1;
		for(i=k;i<=n;i++)
		{
			if(a[i]<a[k])
				break;
			else
				count++;
		}
	}
	else
	{
		count=0;
		for(i=1;i<=k;i++)
		{
			if(a[i]>0)
				count++;
		}
	}
	printf("%d",count);
	return 0;
}