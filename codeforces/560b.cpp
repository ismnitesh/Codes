#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,a3,b1,b2,b3;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
	if(a3+a2<=a1 && max(b2,b3)<=b1)
	{
		cout << "YES";
		return 0;
	}	
	if(a2+b3<=a1 && max(b2,a3)<=b1)
	{
		cout << "YES";
		return 0;
	}
	if(max(a3,a2)<=a1 && (b2+b3)<=b1)
	{
		cout << "YES";
		return 0;
	}	
	if(max(a2,b3)<=a1 && (b2+a3)<=b1)
	{
		cout << "YES";
		return 0;
	}
	if(a3+a2<=b1 && max(b2,b3)<=a1)
	{
		cout << "YES";
		return 0;
	}	
	if(a2+b3<=b1 && max(b2,a3)<=a1)
	{
		cout << "YES";
		return 0;
	}
	if(max(a3,a2)<=b1 && (b2+b3)<=a1)
	{
		cout << "YES";
		return 0;
	}	
	if(max(a2,b3)<=b1 && (b2+a3)<=a1)
	{
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
}