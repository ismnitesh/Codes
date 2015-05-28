#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[102][102],i,j,cnt=0;
	vector<int> v;
	cin >> n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin >> a[i][j];
	for(i=1;i<=n;i++)
	{
		int flag=1;
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==1 || a[i][j]==3)
			{
				flag=0;
				break;
			}
		}
		if(flag)
		{
			for(j=1;j<=n;j++)
			{
				if(a[j][i]==2 || a[j][i]==3)
				{
					flag=0;
					break;
				}
			}
		}
		if(flag)
		{
			cnt++;
			v.push_back(i);
		}
	}
	cout << cnt << endl;
		for(i=0;i<cnt;i++)
			cout << v[i] << " ";
	return 0;
}