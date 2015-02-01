#include<stdio.h>
int main()
{
	long long int max;
	int n,p,k,a[100003],x,y,l,flag,b[100005],i,j,z,c[100004]={0};
	scanf("%d%d%d",&n,&k,&p);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(p--)
	{
		scanf("%d%d",&x,&y);
		if(a[x]>a[y])
		{
			z=x;
			x=y;
			y=z;
		}
		max=a[x]+k;
		j=0;
		flag=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]>max)
			{
				b[j++]=a[i];
			}
			if(a[i]<=max && (a[i]+k)>max)
			{
				max=a[i]+k;
			}
			if(j>0)
			{
				for(l=0;l<j;l++)
				{
					if(c[l]!=-1)
					{
						if(b[l]<=max && (b[l]+k)>max)
						{
							max=b[l]+k;
							c[l]=-1;
						}
						if(b[l]<max && (b[l]+k)<max)
							c[l]=-1;
					}
				}
			}
			if(max>=a[y])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}