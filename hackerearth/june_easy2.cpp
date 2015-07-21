#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int q,n,t;
	cin >> q;
	while(q--)
	{
		cin >> n >> t;
		while(t--)
		{
			n/=2;
			n=n-n/4;
		}
		cout << n << endl;
	}
	return 0;
}