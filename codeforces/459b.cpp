#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,a[200005],i,minimum,maximum,min_cnt,max_cnt;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	minimum=a[0];
	maximum=a[n-1];
	long long int ans=(n*(n-1))/2;
	if(maximum-minimum==0)
		cout << "0 " << ans;
	else
	{
		min_cnt=0;
		max_cnt=0;
		for(i=0;i<n;i++)
		{
			if(a[i]==minimum)
				min_cnt++;
			if(a[i]!=minimum)
				break;
		}
		for(i=n-1;i>=0;i--)
		{
			if(a[i]==maximum)
				max_cnt++;
			if(a[i]!=maximum)
				break;
		}
		ans=max_cnt*min_cnt;
		cout << maximum-minimum << " " << ans;
	}
	return 0;
}