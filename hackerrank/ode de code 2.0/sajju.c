#include<stdio.h>
int main()
{
	int t;
	long long int n,m,sum,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		sum=(m)*(m-1)/2;
		x=n/m;
		y=n-x*m;
		sum=x*sum+(y)*(y+1)/2;
		printf("%lld\n",sum);
	}
	return 0;
}