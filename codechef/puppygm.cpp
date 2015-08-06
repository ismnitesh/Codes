#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,x,y;
	cin >> t;
	while(t--)
	{
		cin >> x >> y;
		if(x%2==1 && y%2==1)
			cout << "Vanka\n";
		else
			cout << "Tuzik\n";
	}
	return 0;
}
