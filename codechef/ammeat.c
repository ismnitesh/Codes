#include<stdio.h>
int main()
{
	int t,n,i,j;
	long long int m,a[10],tmp,sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d%lld",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			sum=sum+a[i];
		}
		if(sum<m)
			printf("-1\n");
		else
		{
			for(i=0;i<n-1;i++)
			{
				for(j=i;j<n;j++)
				{
					if(a[j]>a[i])
					{
						tmp=a[i];
						a[i]=a[j];
						a[j]=tmp;
					}
				}
			}
			int count=0;
			sum=0;
			for(i=0;i<n;i++)
			{
				sum=sum+a[i];
				count++;
				if(sum>=m)
					break;
			}
			printf("%d\n",count);
		}
	}
	return 0;
}