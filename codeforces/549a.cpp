#include <bits/stdc++.h>
using namespace std;
int hash[200];
void init()
{
	hash['f']=0;
	hash['a']=0;
	hash['c']=0;
	hash['e']=0;
}
int main()
{
	int n,m,i,j;
	char a[55][55];
	cin >> n >> m;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin >> a[i][j];
	int cnt=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<m-1;j++)
		{
			init();
			hash[a[i][j]]=1;
			hash[a[i+1][j]]=1;
			hash[a[i][j+1]]=1;
			hash[a[i+1][j+1]]=1;
			if(hash['f'] && hash['a'] && hash['c'] && hash['e'])
				cnt++;
		}
	}
	cout << cnt;
	return 0;
}