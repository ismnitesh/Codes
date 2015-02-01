#include<stdio.h>
int main()
{
	int t,n,i,flag;
	scanf("%d",&t);
	while(t--)
	{	
		scanf("%d",&n);
		long long int a[n],b[n];
		scanf("%lld",&a[0]);
		b[0]=a[0];
		if(n==1)
			printf("YES\n");
		else
		{
		flag=0;
		for(i=1;i<n;i++)
		{
			scanf("%lld",&a[i]);
			b[i]=b[i-1]+a[i];
		}
		for(i=1;i<n-1;i++)
		{
			if(b[i-1]==b[n-1]-b[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	}
	return 0;
}