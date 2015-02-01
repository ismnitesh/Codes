#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,x,k,i,count=0,a[12];
	for(i=0;i<12;i++)
		a[i]=pow(2,i);
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		x=n;
		while(x)
		{
			for(i=0;i<12;i++)
			{
				if(x<a[i])
				{
					k=i-1;
					break;
				}
				else
					k=11;
			}
			count=count+x/a[k];
			x=x%a[k];
		}
		printf("%d\n",count);
		count=0;
	}
	return 0;
}