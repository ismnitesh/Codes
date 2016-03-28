#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x,y;
	cin >> a >> b;
	x=min(a,b);
	y=max(a,b);
	cout << x << " " << (y-x)/2;
	return 0;
}