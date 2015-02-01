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
	long long int n,k,ans=0;
	int m;
	scanf("%lld%lld%d",&n,&k,&m);
	long long int i=1;
	while(i<n)
	{
		if(gcd(i,n)==1)
		{
			ans=(ans+pow(i,k));
			ans=ans%m;
		}
		i++;
	}
	printf("%lld",ans);
	return 0;
}