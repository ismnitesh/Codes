#include <bits/stdc++.h>
using namespace std;
long long int sum[500002],cnt[500002];
long long int ans=0,x=0;
int n,a[500002];
int main()
{
	long long int s=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		s+=a[i];
	}
	if(s%3!=0)
		cout << "0";
	else
	{
		s=s/3;
		sum[n-1]=0;
		cnt[n-1]=0;
		for(int i=n-2;i>=0;i--)
		{
			sum[i]=sum[i+1]+a[i+1];
			if(sum[i]==s)
				cnt[i]=cnt[i+1]+1;
			else
				cnt[i]=cnt[i+1];
		}
		for(int i=0;i<n-2;i++)
		{
			x=x+a[i];
			if(x==s)
				ans+=cnt[i+1];
		}
		cout << ans;
	}
	return 0;
}