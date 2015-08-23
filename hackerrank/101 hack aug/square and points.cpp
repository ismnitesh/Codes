#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<long long int,long long int> i, pair<long long int,long long int> j)
{
	if(i.first<j.first)
		return true;
	else if(i.first==j.first && i.second<j.second)
		return true;
	else
		return false;
}
int main()
{
	long long int n,m,l,i,j,x,y;
	vector< pair<long long int,long long int> >a,p;
	pair<long long int,long long int>point;
	cin >> n >> m >> l;
	for(i=0;i<n;i++)
	{
		cin >> x >> y;
		point=make_pair(x,y);
		a.push_back(point);
	}
	for(i=0;i<m;i++){
		cin >> x >> y;
		point=make_pair(x,y);
		p.push_back(point);
	}
	sort(a.begin(),a.end(),cmp);
	long long int ans=0;
	for(i=0;i<m;i++)
	{
		long long int cnt=0;
		for(j=0;j<n;j++)
		{
			if(a[j].first<=p[i].first && a[j].second<=p[i].second && a[j].first+l>=p[i].first && a[j].second+l>=p[i].second)
				cnt++;
		}
		if(cnt>ans)
			ans=cnt;
	}
	cout << ans;
	return 0;
}