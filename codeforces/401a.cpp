#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,x,sum=0,ans=0,num;
	cin >> n >> x;
	for(i=0;i<n;i++)
	{
		cin >> num;
		sum+=num;
	}
	sum=abs(sum);
	ans=sum/x;
	if(sum%x)
		ans++;
	cout << ans;
	return 0;
}