#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x1,x2,y1,y2,ans=0,x,y;
	cin >> n;
	while(n--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		x=x2-x1+1;
		y=y2-y1+1;
		ans+=x*y;
	}
	cout << ans;
	return 0;
}
