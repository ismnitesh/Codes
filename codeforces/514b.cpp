#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,x1,y1,cnt=0;
	cin >> n;
	cin >> x >> y;
	set<double> s;
	while(n--)
	{
		cin >> x1 >> y1;
		if(x1!=x)
			s.insert(double((y1-y)/(x1-x)));
		else
			cnt=1;
	}
	cnt=cnt+s.size();
	cout << cnt;
	return 0;
}