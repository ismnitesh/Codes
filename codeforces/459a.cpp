#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,x3,y3;
	cin >> a >> b >> c >> d;
	if(a==c)
	{	
		x3=a+abs(b-d);
		cout << x3 << " " << b << " " << x3 << " " << d; 
	}
	else if(b==d)
	{
		y3=b+abs(a-c);
		cout << a << " " << y3 << " " << c << " " << y3;
	}
	else if(abs(a-c)==abs(b-d))
	{
		cout << a << " " << d << " " << c << " " << b; 
	}
	else
		cout << "-1";
	return 0;
}