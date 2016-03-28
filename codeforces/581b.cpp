#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100003],b[100003];
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i];
	b[n-1]=a[n-1];
	for(int i=n-2; i>=0; i--)
		b[i]=max(a[i+1],b[i+1]);
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>b[i])
			cout << "0 ";
		else if(a[i]<=b[i])
			cout << (b[i]-a[i]+1) << " ";
	}
	cout << "0";
	return 0;
}