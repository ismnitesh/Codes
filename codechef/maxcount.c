#include<stdio.h>
int main()
{
	int t,n,a[103],max,k,i;
	scanf("%d",&t);
	while(t--)
	{
		int b[10003]={0};
		k=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		max=0;
		for(i=1;i<=10000;i++)
		{
			if(max<b[i])
			{
				max=b[i];
				k=i;
			}
		}
		printf("%d %d\n",k,max);
	}
	return 0;
}