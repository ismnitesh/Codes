#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,k,ans;
	cin >> k >> a >> b;
	if(b<0)
	{
		a=-a;
		b=-b;
		swap(a,b);
	}
	if(b>=0)
	{
		ans=b/k;
		if(a<=0)
		{
			a=-a;
			ans+=a/k+1;
		}
		else
		{
			a--;
			ans-=a/k;
		}
	}
	cout << ans;
	return 0;
}