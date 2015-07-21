#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,best[102][102],max;
	char a[102][102];
	cin >> n >> m;
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			best[i][j]=0;
	for(i=0;i<n;i++)
		cin >> a[i];
	for(j=0;j<m;j++)
	{
		max=0;
		for(i=0;i<n;i++)
		{
			if(a[i][j]>max)
				max=a[i][j];
		}
		for(i=0;i<n;i++)
		{
			if(a[i][j]==max)
				best[i][j]=1;
		}
	}
	int cnt=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(best[i][j]==1)
			{
				cnt++;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}