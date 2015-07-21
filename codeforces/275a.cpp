#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5],i,j,ans[5][5];
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			cin >> a[i][j];
			a[i][j]%=2;
		}
	}
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			ans[i][j]=1;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(a[i][j]==1)
			{
				ans[i][j]=1-ans[i][j];
				ans[i][j+1]=1-ans[i][j+1];
				ans[i][j-1]=1-ans[i][j-1];
				ans[i-1][j]=1-ans[i-1][j];
				ans[i+1][j]=1-ans[i+1][j];
			}
		}
	}
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			cout << ans[i][j];
		}
		cout << endl;
	}
	return 0;
}