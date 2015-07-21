#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l,c,d,p,nl,np,x,y,z,ans;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	x=(k*l)/nl;
	y=c*d;
	z=p/np;
	ans=min(x,y);
	ans=min(ans,z);
	ans/=n;
	cout << ans;
	return 0;
}