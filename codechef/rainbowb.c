#include<stdio.h>
#define m 1000000007
#define ll long long
ll pow_mod(ll a,  int n)
{
	ll ans = 1, d =a;
	while (n)
	{
		if (n & 1)
			ans = (ans * d) % m;
		d = (d * d)%m;
		n >>= 1;
	}
	return ans;
}
int main()
{
	ll n,i,ans;
	scanf("%llu",&n);
	if(n<13)
		printf("0\n");
	else
	{
		n=n-13;
		n=n/2;
		n=n+6;
		ans=1;
		for(i=1;i<=6;i++)
			ans=(ans*(n--))%m;
		ans=(ans*pow_mod(720,m-2))%m;
		printf("%llu\n",ans%m);
	}
	return 0;
}