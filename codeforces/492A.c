#include<stdio.h>
int main()
{
	int n,x,i;
	scanf("%d",&n);
	i=1;
	while(x<=n)
	{
		i++;
		x=(i*(i+1)*(i+2))/6;
	}
	printf("%d",i-1);
	return 0;
}