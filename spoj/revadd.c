#include<stdio.h>
int rev(int);
int main()
{
	int t,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		a=rev(a);
		b=rev(b);
		c=a+b;
		c=rev(c);
		printf("%d\n",c);
	}
	return 0;
}
int rev(int x)
{
	int a=0;
	while(x)
	{
		a=a*10+x%10;
		x=x/10;
	}
	return a;
}