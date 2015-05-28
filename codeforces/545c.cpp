#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,a[100005][2],i;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i][0] >> a[i][1];
	long long int cnt;
	if(n==1) cnt=1;
	else cnt=2;
	long long int r=a[i][0];
	if(i>2)
	for(i=1;i<n-1;i++)
	{
		if(a[i][0]-a[i][1]>r)
		{
			cnt++;
			r=a[i][0];
		}
		else if(a[i][0]+a[i][1]<a[i+1][0])
		{
			cnt++;
			r=a[i][0]+a[i][1];
		}
	}
	cout << cnt;
	return 0;
}