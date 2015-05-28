#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[102],ans,i;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> a[i];
		a[i]%=2;
	}
	if((a[1]==0 && a[2]==0) || (a[1]==0 && a[3]==0) || (a[2]==0 && a[3]==0))
	{
		for(i=1;i<=n;i++)
		{
			if(a[i]==1)
			{
				ans=i;
				break;
			}
		}
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			if(a[i]==0)
			{
				ans=i;
				break;
			}
		}
	}
	cout << ans;
	return 0;
}