#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,ans,num,x,t;
	cin >> t;
	while(t--)
	{
		ans=0;
		cin >> n >> k;
		while(n--)
		{
			cin >> num;
			x=num%k;
			if(num>k)
				ans+=min(k-x,x);
			else
				ans+=k-num;
		}
		cout << ans << endl;
	}
	return 0;
}