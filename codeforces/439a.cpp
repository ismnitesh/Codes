#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,d,cnt,sum=0,a[105];
	cin >> n >> d;
	cnt=(n-1)*2;
	sum+=cnt*5;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		sum+=a[i];
	}
	if(sum>d)
	{
		cout << "-1";
		return 0;
	}
	else
	{
		d-=sum;
		cnt+=d/5;
		cout << cnt;
		return 0;
	}
}