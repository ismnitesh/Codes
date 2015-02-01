#include<stdio.h>
int main()
{
	int n,k,a[105],i,j,x;
	long long int ans=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		ans=ans+a[i]*((i/k)+1);
	}
	printf("%lld\n",ans);
	return 0;
}