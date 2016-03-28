#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		if(n>m)
			cout << "Bipin "<< (n-m) << endl;
		else if(m>n)
			cout << "Balaji " << (m-n) << endl;
		else
			cout << "No Winner\n";
	}
	return 0;
}