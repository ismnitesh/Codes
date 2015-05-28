#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a==c)
		cout<<a<<" "<<b+abs(a-c)<<" "<<b<<" "<<d+abs(a-b);
	else if(b==d)
		cout<<a+abs(b-d)<<" "<<b<<" "<<c+abs(b-d)<<" "<<d;
	else if(a!=c && b!=d && abs(a-c)==abs(b-d))
		cout<<a<<" "<<d<<" "<<c<<" "<<b;
	else
		cout<<"-1";
	return 0;
}