#include<stdio.h>
int main()
{
	int t,k,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&k);
		a=k/2;
		b=k-a;
		printf("%d\n",a*b);
	}
	return 0;
}