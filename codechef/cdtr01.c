#include<stdio.h>
int main()
{
	int t,n,a[105],j,sum,i,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		scanf("%d",&k);
		sum=0;
		while(k--)
		{
			scanf("%d",&j);
			sum=sum+a[j];
		}
		printf("%d\n",sum);
	}
	return 0;
}