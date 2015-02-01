#include<stdio.h>
int main()
{
	int t,n,c,a[102],sum=0,i;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
	scanf("%d%d",&n,&c);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	if(sum<=c)
		printf("Yes\n");
	else
		printf("No\n");
	}
	return 0;
}