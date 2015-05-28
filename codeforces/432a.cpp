#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,a[2003],cnt=0,i;
	cin >> n >> k;
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	for(i=2;i<n;i=i+3)
	{
		if(a[i]+k<=5)
			cnt++;
		else
			break;
	}
	cout << cnt;
	return 0;
}