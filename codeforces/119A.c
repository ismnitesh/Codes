#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int a,b,h,count=0;
	scanf("%d%d%d",&a,&b,&h);
	while(h)
	{
		if(count%2==0)
			h=h-gcd(a,h);
		else
			h=h-gcd(b,h);
		count++;
	}
	if(count%2==0)
		printf("1");
	else
		printf("0");
	return 0;
}