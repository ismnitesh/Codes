#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
int main()
{
	long long int t,a[4],ans;
	cin >> t;
	while(t--)
	{
		ans=1;
		for(int i=0;i<3;i++)
			cin >> a[i];
		sort(a,a+3);
		for(int i=0;i<3;i++)
			ans=((a[i]-i)%m * ans%m)%m;
		cout << ans << endl;
	}
	return 0;
}