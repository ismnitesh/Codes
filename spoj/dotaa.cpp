#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,m,po;
	cin >> t;
	int a[505];
	while(t--)
	{
		int cnt=0;
		cin >> n >> m >> po;
		for(i=0;i<n;i++)
			cin >> a[i];
		i=0;
		while(i<n)
		{
			if(cnt==m)
				break;
			if(a[i]>po)
			{
				cnt++;
				a[i]-=po;
			}
			else
				i++;
		}
		if(cnt==m)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}