#include <bits/stdc++.h>
using namespace std;
#define m 215372682525
long long int pow_mod(long long int a,long long int n)
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
	long long int t,a,d,n,x,i,sum;
	cin >> t;
	while(t--)
	{
		cin >> a >> d >> n >> x;
		sum=0;
		for(i=0;i<=n;i++)
			sum+=(((a+(i*d)%m)%m)*pow_mod(x,n-i))%m;
		cout << sum << endl;
	}
	return 0;
}