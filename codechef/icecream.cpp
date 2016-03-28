#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	double r1,h1,r2,h2,v1,v2,pi=3.141592653589793;
	cin >> t;
	while(t--)
	{
		cin >> r1 >> h1 >> r2 >> h2;
		v2 = pi*(r2*r2*h2);
		v1 = pi*(r1*r1*h1)/3.0;
		v1=v1+(2.0/3.0)*pi*(r1*r1*r1);
		printf("%0.9lf %0.9lf\n",v1,v2);
	}
	return 0;
}