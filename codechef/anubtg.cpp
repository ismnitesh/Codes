#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[1005],i;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(i=0;i<n;i++)
			cin >> a[i];
		sort(a,a+n);
		int sum=0;
		for(i=n-1;i>=0;i-=4)
		{
			sum=sum+a[i];
			if((i-1)>=0)
			sum=sum+a[i-1];
		}
		cout << sum << endl;
	}
	return 0;
}