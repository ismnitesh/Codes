#include<stdio.h>
int main()
{
	int t,sum=0,i,j,b;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<t;i++)
	{
		for(j=0;j<i;j++)
		{
			b=(a[i])&(a[j]);
			sum=sum+b;
		}
	}
	printf("%d",sum);
	return 0;
}