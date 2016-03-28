#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,a[100003][2],x,ans=0;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i][0] >> a[i][1];
	x=a[0][1];
	ans=a[0][0]*a[0][1];
	for(int i=1;i<n;i++)
	{
		x = min(x,a[i][1]);
		ans+=a[i][0]*x;
	}
	cout << ans;
	return 0;
}