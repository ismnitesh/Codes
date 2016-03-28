#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	long long int a[500002],ans=0;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	for(long long int i=0;i<n;i++)
	{
		long long int cal = a[i]*(n-i);
		ans=max(ans,cal);
	}
	cout << ans;
	return 0;
}