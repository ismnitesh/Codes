#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,a[102],j,min,max,diff;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
	min=1000000;
	for(i=1;i<n-1;i++)
	{
		max=0;
		for(j=1;j<n;j++)
		{
			if(i==j)
				diff=a[j+1]-a[j-1];
			else if(i==j-1)
				diff=a[j]-a[j-2];
			else
				diff=a[j]-a[j-1];
			if(diff>max)
				max=diff;
		}
		if(max<min)
			min=max;
	}
	cout << min;
	return 0;
}