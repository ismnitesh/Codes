#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,cnt=0;
	cin >> n >> m;
	while(n>0 && m>0 && n+m>=3)
	{
		if(n>m && m>=1)
		{
			cnt++;
			n-=2;
			m--;
		}
		else if (m>=n && n>=1 && m>=2)
		{
			cnt++;
			n--;
			m-=2;
		}
	}
	cout << cnt;
	return 0;
}