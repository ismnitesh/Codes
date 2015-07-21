#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,ans,tmp,cnt,i;
	cin >> n;
	tmp=n;
	cnt=0;
	while(tmp)
	{
		tmp/=10;
		cnt++;
	}
	ans=0;
	int val=9;
	for(i=1;i<cnt;i++)
	{
		ans+=val*i;
		val*=10;
	}
	val=0;
	for(i=1;i<cnt;i++)
		val=val*10+9;
	ans+=cnt*(n-val);
	cout << ans;
	return 0;
}