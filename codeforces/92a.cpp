#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int i=0;
	while(m>=(i+1))
	{
		m-=(i+1);
		i++;
		i%=n;
	}
	cout << m;
	return 0;
}