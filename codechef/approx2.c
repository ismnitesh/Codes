#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,k,i,a[1003],count=0,min,j,num;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		min=2000000000;
		if(n==2)
		{
			printf("%d 1\n",abs(a[0]+a[1]-k));
		}
		else
		{
			for(i=0;i<n-1;i++)
			{
				for(j=(i+1);j<n;j++)
				{
					if(i!=j)
					{
						num=abs(a[i]+a[j]-k);
						if(num==min)
						{
							count++;
						}
						else if(num<min)
						{
							count=1;
							min=num;
						}
					}
				}
			}
			printf("%d %d\n",min,count);
		}
	}
	return 0;
}