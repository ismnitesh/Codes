#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,x,y,z;
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	int req=0,ext=0;
	if(a>x)
		ext=ext+(a-x)/2;
	else
		req+=(x-a);
	if(b>y)
		ext=ext+(b-y)/2;
	else
		req+=(y-b);
	if(c>z)
		ext=ext+(c-z)/2;
	else
		req+=(z-c);
//	cout<< req << " " << ext;
	if(ext>=req)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}