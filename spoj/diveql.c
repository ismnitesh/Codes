#include<stdio.h>
#include<math.h>
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
	long long int n,a,b,x,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		scanf("%lld",&p);		
		a=pow(p,n);
		a=(a-1)/(p-1);
		b=pow(p,n-1);
		x=gcd(a,b);
		a=a/x;
		b=b/x;
		a=a%1000000007;
		b=b%1000000007;
		printf("%lld %lld\n",a,b);
	}
}
