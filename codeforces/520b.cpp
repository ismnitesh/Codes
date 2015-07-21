#include <bits/stdc++.h>
using namespace std;
long long int solve(long long int n,long long int m,long long int i)
{
	if(m==n)
		return i;
	else if(m<n)
	{
		return i+(n-m);
	}
	else
	{
		if(m%2)
			return solve(n,m+1,i+1);
		else
			return solve(n,m/2,i+1);
	}
}
int main()
{
	long long int n,m;
	cin >> n >> m;
	long long int ans = solve(n,m,0);
	cout << ans;
	return 0;
}