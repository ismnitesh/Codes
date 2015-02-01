#include<stdio.h>
int main()
{
	int n,k,a[100005],d[100005],mina,maxd,i,min,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		d[i]=a[i]-a[i-1];
	}
	maxd=1000000000;
	mina=1000000000;
	for(i=1;i<n;i++)
	{
		min=a[i]-i*d[i];
		if(min<mina)
		{
			int flag=0,count=0;
			for(j=0;j<n;j++)
			{
				if(a[j]!=min+j*d[i])
				{
					count++;
					if(count>k)
					{
						flag=1;
						break;
					}
				}
			}
			if(flag==0)
			{
				mina=min;
				maxd=d[i];
			}
		}
		else if(min==mina && d[i]<maxd)
		{
			int flag=0,count=0;
			for(j=0;j<n;j++)
			{
				if(a[j]!=min+j*d[i])
				{
					count++;
					if(count>k)
					{
						flag=1;
						break;
					}
				}
			}
			if(flag==0)
			{
				maxd=d[i];
				mina=min;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",mina+i*maxd);
	return 0;
}