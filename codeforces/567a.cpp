#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,a[100004],max_cost,min_cost;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
	cout << a[1]-a[0] << " " << a[n-1]-a[0] << endl;
	for(i=1;i<n-1;i++)
	{
		min_cost=min(a[i+1]-a[i],a[i]-a[i-1]);
		max_cost=max(a[n-1]-a[i],a[i]-a[0]);
		cout << min_cost << " " << max_cost << endl;
	}
	cout << a[n-1]-a[n-2] << " " << a[n-1]-a[0] << endl;
	return 0;
}