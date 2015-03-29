#include<stdio.h>
int main()
{
	long long int a,b,count,tmp;
	scanf("%lld%lld",&a,&b);
	count=0;
	count=count+(a/b);
		a=a%b;
		if(a<b)
		{
			tmp=a;
			a=b;
			b=tmp;
		}
	while(a!=b && b!=0)
	{
		count=count+(a/b);
		a=a%b;
		if(a<b)
		{
			tmp=a;
			a=b;
			b=tmp;
		}
		if(b==0)
			break;
	}
	printf("%lld",count);
	return 0;
}