#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int t,a,b,s,x,y;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		s=a+b;
		x=(2*s)/5;
		y=s-x;
		if((x+y)==s)
		{
			if(x!=0 && (2*y)/x==3 && (2*y)%x==0)
				printf("%d\n",abs(x-a));
			else
				printf("-1\n");
		}
		else
			printf("-1\n");
	}
	return 0;
}