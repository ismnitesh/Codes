#include<stdio.h>
#define m 1000000007 
long long int pow_mod(int a,  long long int n)
{
	long long int ans = 1, d =a;
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
	int t;
	long long int n,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ans=pow_mod(2,n);
		ans--;
		ans=(ans+m)%m;
		printf("%lld\n",ans);
	}
	return 0;
}