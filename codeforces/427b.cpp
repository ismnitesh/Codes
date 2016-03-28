#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,c,a[200004];
	cin >> n >> t >> c;
	for(int i=0;i<n;i++)
		cin >> a[i];
	int ans=0;
	for(int i=0,cnt=0;i<n;i++)
	{
		if(a[i]>t)
			cnt=0;
		else if(a[i]<=t)
			cnt++;
		if(cnt>=c)
			ans++;
	}
	cout << ans;
	return 0;
}