#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[104],sum=0,i,cnt,s1=0;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		sum+=a[i];
	}
	sort(a,a+n,greater<int>());
	cnt=0;
	for(i=0;i<n;i++)
	{
		s1+=a[i];
		cnt++;
		if(s1>sum/2)
			break;
	}
	cout << cnt;
	return 0;
}