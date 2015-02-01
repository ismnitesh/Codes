#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d",&n);
	x=1;
	while(n)
	{
		if((n%2)==1)
		 printf("%d ",x);
		x*=2;
		n/=2;
	}
	return 0;
}