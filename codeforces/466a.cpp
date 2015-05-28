#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b,c1,c2;
	cin >> n >> m >> a >> b;
	c1=n*a;
	c2=(n/m)*b;
	if(b>((n%m)*a))
		c2+=(n%m)*a;
	else
		c2+=b;
	if(c1<c2)
		cout << c1;
	else
		cout << c2;
	return 0;
}