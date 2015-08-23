#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,ans,max;
	int a[103][103],cnt[103],b[103];
	cin >> n >> m;
	memset(cnt,0,sizeof(cnt));
	memset(b,0,sizeof(b));
	for(i=0;i<m;i++)
	{
		max=-1;
		for(j=0;j<n;j++)
		{
			cin >> a[i][j];
			if(a[i][j]>max)
			{
				max=a[i][j];
				b[i]=j;
			}
		}
	}
	for(i=0;i<m;i++)
		cnt[b[i]]++;
	max=-1;
	for(i=0;i<n;i++)
	{
		if(cnt[i]>max)
		{
			max=cnt[i];
			ans=i+1;
		}
	}
	cout << ans;
	return 0;
}