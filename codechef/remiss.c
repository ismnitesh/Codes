#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
	int t,a,b,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		x=max(a,b);
		printf("%d %d\n",x,a+b);
	}
	return 0;
}