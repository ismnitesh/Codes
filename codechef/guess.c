#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t;
	long long int n,m,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		p=n*m;
		if(p%2==0)
			printf("1/2\n");
		else
			printf("%lld/%lld\n",p/2,p);
	}
	return 0;
}