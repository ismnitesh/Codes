#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,a[2006],b[2006];
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(b[j]>a[i])
				break;
		cout << n-j+1 << " ";
	}
	return 0;
}