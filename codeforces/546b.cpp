#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100004],ans=0,num,i,j;
	cin >> n;
	memset(a,0,sizeof(a));
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	for(i=1;i<n;i++)
	{
		if(a[i]<=a[i-1])
		{
			ans+=a[i-1]-a[i]+1;
			a[i]=a[i-1]+1;
		}
	}
	cout << ans;
	return 0;
}