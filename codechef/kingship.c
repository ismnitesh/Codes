#include<stdio.h>
int main()
{
	int t,i,x,n;
	long long int a[100004],min,total;
	scanf("%d",&t);
	while(t--)
	{
		min=9999999;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(a[i]<min)
			{
				min=a[i];
				x=i;
			}
		}
		total=0;
		for(i=0;i<n;i++)
		{
			if(i!=x)
			{
				total=total+min*a[i];
			}
		}
		printf("%lld\n",total);
	}
	return 0;
}