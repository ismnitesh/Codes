#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,a[11],num;
	cin >> n >> m;
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++)
	{
		cin >> num;
		a[num]++;
	}
	long long int ans=0;
	ans=(n*(n-1))/2;
	for(int i=1;i<=10;i++)
	{
		if(a[i]>1)
			ans=ans-((a[i]*(a[i]-1))/2);
	}
	cout << ans;
	return 0;
}