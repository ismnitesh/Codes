#include<stdio.h>
int main()
{
	int t,n,a[10005],i,min,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%d",&a[0]);
		min=a[0];
		ans=1;
		for(i=1;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(min>=a[i])
			{
				ans++;
				min=a[i];
			}
		}
		printf("%d\n",ans);	
	}
	return 0;
}