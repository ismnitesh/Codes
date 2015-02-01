#include<stdio.h>
int main()
{
	int n,a,b,sum=0,max=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		sum=sum-a+b;
		if(sum>max)
			max=sum;
	}
	printf("%d",max);
	return 0;
}