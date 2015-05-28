#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,x,y,i;
	pair <int,int> num;
	vector < pair <int,int> > v;
	cin >> t;
	for(i=1;i<=t;i++)
	{
		cin >> x >> y;
		x+=y;
		num=make_pair(x,i);
		v.push_back(num);
	}
	sort(v.begin(),v.end());
	for(i=0;i<t;i++)
		cout << v[i].second << " ";
	return 0;
}