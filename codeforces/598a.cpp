#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int n,ans;
	cin >> t;
	while(t--)
	{
		cin >> n;
		ans=(n*(n+1))/2;
		long long int x=1,k=0;
		while(x<=n)
		{
			x*=2;
			k++;
		}
		x--;
		ans=ans-(2*x);
		cout << ans << endl;
	}
}