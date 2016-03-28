#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a[100003],n,k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i=0;i<n;i++)
			cin >> a[i];
		sort(a,a+n);
		int sum=0;
		for(int i=k;i<n-k;i++)
			sum=sum+a[i];
		double ans=(double)sum/(double)(n-2*k);
		printf("%0.8lf\n",ans);
	}
	return 0;
}