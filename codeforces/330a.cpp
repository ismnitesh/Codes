#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r,c,f[10][10],row[10],col[10],i,j,cnt=0;
	char a[10][10];
	cin >> r >> c;
	for(i=0;i<r;i++)
	{
		getchar();
		for(j=0;j<c;j++)
		{
			row[i]=0;
			col[j]=0;
			scanf(" %c",&a[i][j]);
			f[i][j]=0;
			if(a[i][j]=='S')
			{
				row[i]=1;
				col[j]=1;
			}
		}
	}
	for(i=0;i<r;i++)
	{
		if(row[i]==0)
		{
			cnt+=c;
			for(j=0;j<c;j++)
				f[i][j]=1;
		}
	}
	for(i=0;i<c;i++)
	{
		if(col[i]==0)
		{
			for(j=0;j<r;j++)
			{
				if(f[j][i]==0)
					cnt++;
			}
		}
	}
	for(i=0;i<c;i++)
		cout << col[i];
	cout << endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout << f[i][j];
		}
		cout << endl;
	}
	cout << cnt;
	return 0;
}