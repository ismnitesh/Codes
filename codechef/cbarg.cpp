#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,num,ans,i,a[100004];
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> a[0];
		ans=a[0];
		for(i=1;i<n;i++)
		{
			cin >> a[i];
			if(a[i]>a[i-1])
				ans=ans+a[i]-a[i-1];
		}
		cout << ans << endl;
	}
	return 0;
}