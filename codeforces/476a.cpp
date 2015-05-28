#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i;
	cin >> n >> m;
	int l=n/2+n%2;
	for(i=l;i<=n;i++)
	{
		if(i%m==0)
		{
			cout << i;
			return 0;
		}
	}
	cout << "-1";
	return 0;
}