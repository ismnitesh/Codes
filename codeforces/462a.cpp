#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a[103][103];
	int n,i,j;
	cin >> n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin >> a[i][j];
	for(i=0;i<=n+1;i++)
	{
		a[i][0]='x';
		a[i][n+1]='x';
		a[0][i]='x';
		a[n+1][i]='x';
	}
	int cnt=0,f=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cnt=0;
			if(a[i][j-1]=='o')
				cnt++;
			if(a[i][j+1]=='o')
				cnt++;
			if(a[i-1][j]=='o')
				cnt++;
			if(a[i+1][j]=='o')
				cnt++;
			if(cnt%2==1)
				f=1;
		}
	}
	if(f)
		cout << "NO";
	else
		cout << "YES";
}