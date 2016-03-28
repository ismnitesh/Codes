#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	map< pair<int,int>,int > m;
	vector<pair<int,int> > v;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> x >> y;
		m[make_pair(x,y)]=1;
		v.push_back(make_pair(x,y));
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		x=v[i].first;
		y=v[i].second;
		int z=0;
		for(int j=y+1;j<=1000;j++)
		{
			if(m[make_pair(x,j)]==1)
			{
				z++;
				break;
			}
		}
		for(int j=y-1;j>=-1000;j--)
		{
			if(m[make_pair(x,j)]==1)
			{
				z++;
				break;
			}
		}
		for(int j=x+1;j<=1000;j++)
		{
			if(m[make_pair(j,y)]==1)
			{
				z++;
				break;
			}
		}
		for(int j=x-1;j>=-1000;j--)
		{
			if(m[make_pair(j,y)]==1)
			{
				z++;
				break;
			}
		}
		if(z==4)
			cnt++;
	}
	cout << cnt;
	return 0;
}