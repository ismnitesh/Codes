#include <bits/stdc++.h>
using namespace std;
int cmp(pair<int,int> i,pair<int,int>j)
{
	return i.first < j.first;
}
int main()
{
	int n,a,b,i;
	pair <int,int> p;
	vector < pair<int,int> > v;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a >> b;
		p=make_pair(a,b);
		v.push_back(p);
	}
	sort(v.begin(),v.end(),cmp);
	for(i=1;i<n;i++)
	{
		if(v[i].second<v[i-1].second)
		{
			cout << "Happy Alex";
			return 0;
		}
	}
	cout << "Poor Alex";
	return 0;
}