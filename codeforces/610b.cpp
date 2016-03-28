#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,a[200001],m=9999999999,first=9999999,last=0;
	cin >> n;
	for(long long int i=0;i<n;i++)
	{
		cin >> a[i];
		m=min(m,a[i]);
	}
	long long int prev=-1,dis=0;
	for(long long int i=0;i<n;i++)
	{
		a[i]=a[i]-m;
		if(a[i]==0)
		{
			first=min(i,first);
			last=max(i,last);
			if(prev!=-1)
				dis=max(dis,i-prev-1);
			prev=i;
		}
	}
	dis=max(dis,first+n-last-1);
	cout << dis+n*m;
	return 0;
}