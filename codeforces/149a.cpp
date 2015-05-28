#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,sum=0,i,a[12];
	cin >> k;
	for(i=0;i<12;i++)
		cin >> a[i];
	sort(a,a+12);
	if(k==0)
	{
		cout << "0";
		return 0;
	}
	for(i=11;i>=0;i--)
	{
		if(sum>=k)
			break;
		sum+=a[i];
	}
	if(sum<k)
	{
		cout << "-1";
		return 0;
	}
	else
	{
		cout << 11-i;
	}
	return 0;
}