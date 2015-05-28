#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair <int,int> b)
{
	if(a.first<b.first)
		return true;
	else if(a.first==b.first)
	{
		if(a.second>b.second)
			return true;
		else
			return false;
	}
	else
		return false;
}
int main()
{
	pair <int,int> a[10002];
	int s,n,i,flag=0;
	cin >> s >> n;
	for(int i=0;i<n;i++)
		cin >> a[i].first >> a[i].second;
	sort(a,a+n,cmp);
	for(i=0;i<n;i++)
	{
		if(s<=a[i].first)
		{
			flag=1;
			break;
		}
		else
			s+=a[i].second;
	}
	if(flag)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}