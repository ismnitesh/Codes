#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,c,a[105],i,max;
	cin >> n >> c;
	for(i=0;i<n;i++)
		cin >> a[i];
	max=-10000;
	for(i=1;i<n;i++)
		if(a[i-1]-a[i]>max)
			max=a[i-1]-a[i];
		max-=c;
	if(max<0)
		max=0;
	cout << max;
	return 0;
}