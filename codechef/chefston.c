#include<stdio.h>
int main()
{
	long long int t,n,m,i,max,x,a[100003],b[100003];
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		for(i=0;i<n;i++)
			scanf("%lld",&b[i]);
		max=0;
		for(i=0;i<n;i++)
		{
			x=b[i]*(m/a[i]);
			if(x>max)
				max=x;
		}
		printf("%lld\n",max);
	}
	return 0;
}