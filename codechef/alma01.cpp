#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
long long int pow_mod(int a,  int n)
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
long long int fact(int n)
{
	long long int ans=1,i;
	for(i=1;i<=n;i++)
		ans=(ans*i)%m;
	return ans;
}
int main()
{
	int t,n,k;
	long long int ans,f1,f2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		f1=fact(n);
		f2=fact(n-k);
		ans=(f1*pow_mod(f2,m-2))%m;
		printf("%lld\n",ans);
	}
	return 0;
}