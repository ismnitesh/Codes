#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	a=max(a,b);
	a=7-a;
	switch(a)
	{
		case 1:
			cout << "1/6";
			break;
		case 2:
			cout << "1/3";
			break;
		case 3:
			cout << "1/2";
			break;
		case 4:
			cout << "2/3";
			break;
		case 5:
			cout << "5/6";
			break;
		case 6:
			cout << "1/1";
			break;
	}
	return 0;
}