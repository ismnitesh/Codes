#include<bits/stdc++.h>
using namespace std;
map<int,long long > dp;
long long int fun(long long int n)
{
	if(n==0)
		return 0;
	if(dp[n]!=0) return dp[n];
	long long aux=fun(n/2)+fun(n/3)+fun(n/4);
	if(aux>n) dp[n]=aux;
	else dp[n]=n;
	return dp[n];
		
}
int main()
{
	long long int n;
	while(scanf("%lld",&n)==1)
	{
		printf("%lld\n",fun(n));
	}
	return 0;
}