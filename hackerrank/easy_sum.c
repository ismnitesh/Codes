#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	long long int n,m,x,y,sum;
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		x=n/m;
		y=n%m;
		sum=0;
		sum=x*(m-1)*(m)/2;
		sum=sum+(y+1)*(y)/2;
		printf("%lld\n",sum);
	}
	return 0;
}