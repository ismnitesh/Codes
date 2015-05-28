#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a;
	cin >> t;
	while(t--)
	{
		cin >> a;
		a=180-a;
		if(360%a==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}