#include <bits/stdc++.h>
using namespace std;
int n,a[100004],i,l[1000002],r[1000002],cnt[1000002];
int main()
{
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
	memset(l,0,sizeof(l));
	memset(r,0,sizeof(r));
	memset(cnt,0,sizeof(cnt));
	for(i=0;i<n;i++)
	{
		cnt[a[i]]++;
		if(l[a[i]]==0)
			l[a[i]]=i+1;
		r[a[i]]=i+1;
	}
	int la=1,ra=n,max=1;
	for(i=1;i<=1000000;i++)
	{
		if(max<cnt[i])
		{
			max=cnt[i];
			la=l[i];
			ra=r[i];
		}
		else if(max==cnt[i] && r[i]-l[i]<ra-la)
		{
			la=l[i];
			ra=r[i];
		}
	}
	cout << la << " " << ra;
	return 0;
}