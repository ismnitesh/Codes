#include<stdio.h>
int main()
{
	int n,i,j,diff;
	scanf("%d",&n);
	int a[n+1];
	long long int ans[n+1];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	ans[1]=0;
	for(i=2;i<=n;i++)
		ans[i]=9999999999999;
	for(i=2;i<=n;i++)
	{
		for(diff=1;diff<=n;diff=diff*2)
		{
			j=i-diff;
			if(j<1)
				break;
			else
		//	printf("1:%d %d\n",i,j);
		//	if(!((j-i) & (j-i-1)))
			{	
		//		printf("2:%d %d\n",i,j);
				if((ans[j]+abs(a[i]-a[j]))<ans[i])
					ans[i]=ans[j]+abs(a[j]-a[i]);
			}
		}
	}
//	for(i=1;i<=n;i++)
		printf("%lld ",ans[n]);
	return 0;
}