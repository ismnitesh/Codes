#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[6],i,side=0,ans;
	for(i=0;i<6;i++)
		cin >> a[i];
	side=a[0]+a[1]+a[2];
	ans=side*side-a[0]*a[0]-a[2]*a[2]-a[4]*a[4];
	cout << ans;
	return 0;
}