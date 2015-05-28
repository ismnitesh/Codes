#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,num,i,j,cnt=0;
	vector<int> b,g;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> num;
		b.push_back(num);
	}
	cin >> m;
	for(i=0;i<m;i++)
	{
		cin >> num;
		g.push_back(num);
	}
	sort(b.begin(),b.end());
	sort(g.begin(),g.end());
	j=0;
	i=0;
	while(i<n && j<m)
	{
		if(g[j]>b[i]+1)
			i++;
		else if(g[j]<b[i]-1)
			j++;
		else
		{
			i++;
			j++;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}